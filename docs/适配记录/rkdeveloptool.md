# rkdeveloptool

我来为你创建一个不依赖 libusb 的本地磁盘烧写工具。它解析 Rockchip parameter 文件，直接操作本地块设备（如 `/dev/sda`）进行分区和镜像写入。

## 整体方案

创建一个全新的工具 `rkdisktool`，核心思路：

| 原始 rkdeveloptool | 新工具 rkdisktool |
|---|---|
| 通过 libusb 与 Rockchip 设备通信 | 直接 `open/read/write` 块设备 |
| `RKU_WriteLBA()` USB 命令 | `pwrite()` 系统调用 |
| `RKU_ReadLBA()` USB 命令 | `pread()` 系统调用 |
| 目标：USB 连接的 SoC | 目标：本地 `/dev/sdX`、`/dev/nvmeXn1` 等 |

---

## 1. 项目结构

```
rkdisktool/
├── CMakeLists.txt
├── main.cpp
├── rk_param.h      # parameter 解析
├── rk_param.cpp
├── rk_disk.h       # 块设备操作
├── rk_disk.cpp
├── rk_gpt.h        # GPT 分区表生成
├── rk_gpt.cpp
└── crc.h / crc.cpp # CRC32
```

---

## 2. CMakeLists.txt   

```cmake
cmake_minimum_required(VERSION 3.10)
project(rkdisktool CXX C)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 不需要 libusb，只用标准库
add_executable(rkdisktool
    main.cpp
    rk_param.cpp
    rk_disk.cpp
    rk_gpt.cpp
    crc.cpp
)

target_link_libraries(rkdisktool)  # 无外部依赖
```

---

## 3. crc.h / crc.cpp

```cpp
// crc.h
#ifndef CRC_H
#define CRC_H

#include <cstdint>
#include <cstddef>

uint32_t crc32_le(uint32_t crc, const unsigned char *p, size_t len);

#endif
```

```cpp
// crc.cpp
#include "crc.h"

uint32_t crc32_le(uint32_t crc, const unsigned char *p, size_t len)
{
    int i;
    while (len--) {
        crc ^= *p++;
        for (i = 0; i < 8; i++)
            crc = (crc >> 1) ^ ((crc & 1) ? 0xEDB88320 : 0);
    }
    return crc;
}
```

---

## 4. rk_param.h / rk_param.cpp — 解析 parameter 文件

```cpp
// rk_param.h
#ifndef RK_PARAM_H
#define RK_PARAM_H

#include <string>
#include <vector>
#include <cstdint>

struct PartitionInfo {
    std::string name;
    uint32_t offset_sectors;  // 扇区偏移 (每扇区 512 字节)
    uint32_t size_sectors;    // 扇区大小, 0xFFFFFFFF 表示占满剩余空间
};

struct ParameterData {
    std::vector<PartitionInfo> partitions;
    std::string firmware_ver;
    std::string machine_model;
    std::string machine_type;
    std::string manufacturer;
};

// 解析 parameter 文件
bool parse_parameter_file(const std::string &filepath, ParameterData &data);

// 解析 parameter 字符串内容
bool parse_parameter_string(const char *content, ParameterData &data);

// 打印分区信息
void print_partitions(const ParameterData &data);

#endif
```

```cpp
// rk_param.cpp
#include "rk_param.h"
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <iostream>

static std::string trim(const std::string &s) {
    size_t start = s.find_first_not_of(" \t\r\n");
    if (start == std::string::npos) return "";
    size_t end = s.find_last_not_of(" \t\r\n");
    return s.substr(start, end - start + 1);
}

// 解析单个分区条目: 如 "0x00002000@0x00004000(uboot)"
static bool parse_partition_entry(const std::string &entry, PartitionInfo &part)
{
    // 格式: SIZE@OFFSET(NAME)
    size_t at_pos = entry.find('@');
    if (at_pos == std::string::npos) return false;

    size_t paren_open = entry.find('(', at_pos);
    size_t paren_close = entry.find(')', paren_open);
    if (paren_open == std::string::npos || paren_close == std::string::npos)
        return false;

    std::string size_str = trim(entry.substr(0, at_pos));
    std::string offset_str = trim(entry.substr(at_pos + 1, paren_open - at_pos - 1));
    std::string name_str = trim(entry.substr(paren_open + 1, paren_close - paren_open - 1));

    // 解析 size
    if (size_str == "-") {
        part.size_sectors = 0xFFFFFFFF;
    } else {
        part.size_sectors = (uint32_t)strtoul(size_str.c_str(), nullptr, 0);
    }

    part.offset_sectors = (uint32_t)strtoul(offset_str.c_str(), nullptr, 0);
    part.name = name_str;

    return true;
}

bool parse_parameter_string(const char *content, ParameterData &data)
{
    data.partitions.clear();
    std::stringstream stream(content);
    std::string line;

    while (std::getline(stream, line)) {
        line = trim(line);
        if (line.empty() || line[0] == '#') continue;

        // 解析 FIRMWARE_VER, MACHINE_MODEL 等
        if (line.find("FIRMWARE_VER") != std::string::npos) {
            size_t pos = line.find(':');
            if (pos != std::string::npos)
                data.firmware_ver = trim(line.substr(pos + 1));
            continue;
        }
        if (line.find("MACHINE_MODEL") != std::string::npos) {
            size_t pos = line.find(':');
            if (pos != std::string::npos)
                data.machine_model = trim(line.substr(pos + 1));
            continue;
        }
        if (line.find("MACHINE_TYPE") != std::string::npos) {
            size_t pos = line.find(':');
            if (pos != std::string::npos)
                data.machine_type = trim(line.substr(pos + 1));
            continue;
        }
        if (line.find("MANUFACTURER") != std::string::npos) {
            size_t pos = line.find(':');
            if (pos != std::string::npos)
                data.manufacturer = trim(line.substr(pos + 1));
            continue;
        }

        // 解析 CMDLINE 中的 mtdparts
        size_t mtdparts_pos = line.find("mtdparts=");
        if (mtdparts_pos == std::string::npos) continue;

        // 找到第一个冒号 (设备名后面的)
        size_t colon_pos = line.find(':', mtdparts_pos);
        if (colon_pos == std::string::npos) continue;

        std::string partitions_str = line.substr(colon_pos + 1);

        // 按逗号分割
        std::stringstream pstream(partitions_str);
        std::string entry;
        while (std::getline(pstream, entry, ',')) {
            entry = trim(entry);
            if (entry.empty()) continue;

            PartitionInfo part;
            if (parse_partition_entry(entry, part)) {
                data.partitions.push_back(part);
            }
        }
    }

    return !data.partitions.empty();
}

bool parse_parameter_file(const std::string &filepath, ParameterData &data)
{
    std::ifstream file(filepath, std::ios::binary);
    if (!file.is_open()) {
        std::cerr << "无法打开文件: " << filepath << std::endl;
        return false;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string content = buffer.str();

    return parse_parameter_string(content.c_str(), data);
}

void print_partitions(const ParameterData &data)
{
    printf("\n");
    printf("+------+------------+------------+----------------+\n");
    printf("|  NO  | Offset(LBA)| Size(LBA)  | Name           |\n");
    printf("+------+------------+------------+----------------+\n");
    for (size_t i = 0; i < data.partitions.size(); i++) {
        const auto &p = data.partitions[i];
        printf("| %4zu | 0x%08X | ", i, p.offset_sectors);
        if (p.size_sectors == 0xFFFFFFFF)
            printf("0xFFFFFFFF | ");
        else
            printf("0x%08X | ", p.size_sectors);
        printf("%-14s |\n", p.name.c_str());
    }
    printf("+------+------------+------------+----------------+\n");
    printf("\n");
}
```

---

## 5. rk_disk.h / rk_disk.cpp — 块设备操作（替代 libusb）

```cpp
// rk_disk.h
#ifndef RK_DISK_H
#define RK_DISK_H

#include <cstdint>
#include <cstddef>
#include <string>

#define SECTOR_SIZE 512

class BlockDevice {
public:
    BlockDevice();
    ~BlockDevice();

    // 打开块设备
    bool open(const std::string &path, bool readonly = false);
    void close();
    bool is_open() const;

    // 获取磁盘信息
    uint64_t get_total_sectors() const;
    uint64_t get_total_bytes() const;
    const std::string& get_path() const;

    // 读写扇区 (LBA)
    bool read_sectors(uint64_t lba, uint32_t count, void *buffer);
    bool write_sectors(uint64_t lba, uint32_t count, const void *buffer);

    // 写入镜像文件到指定 LBA
    bool write_image(uint64_t lba, const std::string &image_path);

    // 读取扇区到文件
    bool read_to_file(uint64_t lba, uint32_t count, const std::string &output_path);

    // 擦除（写入零）指定范围的扇区
    bool erase_sectors(uint64_t lba, uint64_t count);

    // 同步到磁盘
    bool sync();

private:
    int m_fd;
    std::string m_path;
    uint64_t m_total_sectors;

    bool get_device_size();
};

#endif
```

```cpp
// rk_disk.cpp
#include "rk_disk.h"

#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <linux/fs.h>
#include <cstring>
#include <cstdio>
#include <cerrno>
#include <iostream>

#define RW_BATCH_SECTORS 128  // 每次读写 128 个扇区 (64KB)

BlockDevice::BlockDevice() : m_fd(-1), m_total_sectors(0) {}

BlockDevice::~BlockDevice() {
    close();
}

bool BlockDevice::open(const std::string &path, bool readonly)
{
    if (m_fd >= 0) close();

    int flags = readonly ? O_RDONLY : O_RDWR;
    m_fd = ::open(path.c_str(), flags | O_SYNC);
    if (m_fd < 0) {
        fprintf(stderr, "无法打开设备 %s: %s\n", path.c_str(), strerror(errno));
        return false;
    }

    m_path = path;
    if (!get_device_size()) {
        ::close(m_fd);
        m_fd = -1;
        return false;
    }

    printf("已打开设备: %s (总容量: %lu 扇区 = %.2f GB)\n",
           path.c_str(), m_total_sectors,
           (double)(m_total_sectors * SECTOR_SIZE) / (1024.0 * 1024.0 * 1024.0));
    return true;
}

void BlockDevice::close()
{
    if (m_fd >= 0) {
        ::fsync(m_fd);
        ::close(m_fd);
        m_fd = -1;
    }
}

bool BlockDevice::is_open() const {
    return m_fd >= 0;
}

bool BlockDevice::get_device_size()
{
    // 尝试 BLKGETSIZE64
    uint64_t size_bytes = 0;
    if (ioctl(m_fd, BLKGETSIZE64, &size_bytes) == 0) {
        m_total_sectors = size_bytes / SECTOR_SIZE;
        return true;
    }

    // 回退: 使用 lseek
    off_t end = lseek(m_fd, 0, SEEK_END);
    if (end > 0) {
        m_total_sectors = (uint64_t)end / SECTOR_SIZE;
        lseek(m_fd, 0, SEEK_SET);
        return true;
    }

    fprintf(stderr, "无法获取设备大小\n");
    return false;
}

uint64_t BlockDevice::get_total_sectors() const {
    return m_total_sectors;
}

uint64_t BlockDevice::get_total_bytes() const {
    return m_total_sectors * SECTOR_SIZE;
}

const std::string& BlockDevice::get_path() const {
    return m_path;
}

bool BlockDevice::read_sectors(uint64_t lba, uint32_t count, void *buffer)
{
    if (m_fd < 0) return false;

    off_t offset = (off_t)lba * SECTOR_SIZE;
    if (lseek(m_fd, offset, SEEK_SET) < 0) {
        fprintf(stderr, "seek 到 LBA %lu 失败: %s\n", lba, strerror(errno));
        return false;
    }

    size_t total_bytes = (size_t)count * SECTOR_SIZE;
    ssize_t nread = read(m_fd, buffer, total_bytes);
    if (nread != (ssize_t)total_bytes) {
        fprintf(stderr, "读取 LBA %lu 失败: read=%zd, expected=%zu, %s\n",
                lba, nread, total_bytes, strerror(errno));
        return false;
    }
    return true;
}

bool BlockDevice::write_sectors(uint64_t lba, uint32_t count, const void *buffer)
{
    if (m_fd < 0) return false;

    off_t offset = (off_t)lba * SECTOR_SIZE;
    if (lseek(m_fd, offset, SEEK_SET) < 0) {
        fprintf(stderr, "seek 到 LBA %lu 失败: %s\n", lba, strerror(errno));
        return false;
    }

    size_t total_bytes = (size_t)count * SECTOR_SIZE;
    ssize_t nwritten = write(m_fd, buffer, total_bytes);
    if (nwritten != (ssize_t)total_bytes) {
        fprintf(stderr, "写入 LBA %lu 失败: written=%zd, expected=%zu, %s\n",
                lba, nwritten, total_bytes, strerror(errno));
        return false;
    }
    return true;
}

bool BlockDevice::write_image(uint64_t lba, const std::string &image_path)
{
    int img_fd = ::open(image_path.c_str(), O_RDONLY);
    if (img_fd < 0) {
        fprintf(stderr, "无法打开镜像文件: %s: %s\n", image_path.c_str(), strerror(errno));
        return false;
    }

    // 获取文件大小
    struct stat st;
    if (fstat(img_fd, &st) < 0) {
        ::close(img_fd);
        return false;
    }
    uint64_t file_size = (uint64_t)st.st_size;
    uint64_t total_sectors = (file_size + SECTOR_SIZE - 1) / SECTOR_SIZE;

    printf("写入镜像: %s (%.2f MB) -> LBA 0x%lX\n",
           image_path.c_str(),
           (double)file_size / (1024.0 * 1024.0),
           lba);

    unsigned char *buf = new unsigned char[RW_BATCH_SECTORS * SECTOR_SIZE];
    uint64_t written_sectors = 0;
    bool success = true;

    while (written_sectors < total_sectors) {
        uint32_t batch = RW_BATCH_SECTORS;
        if (written_sectors + batch > total_sectors)
            batch = (uint32_t)(total_sectors - written_sectors);

        memset(buf, 0, RW_BATCH_SECTORS * SECTOR_SIZE);

        ssize_t nread = read(img_fd, buf, (size_t)batch * SECTOR_SIZE);
        if (nread < 0) {
            fprintf(stderr, "读取镜像文件失败: %s\n", strerror(errno));
            success = false;
            break;
        }

        // 即使读到的不足 batch 个扇区（文件尾部），也用实际读到的
        uint32_t write_batch = (uint32_t)((nread + SECTOR_SIZE - 1) / SECTOR_SIZE);
        if (write_batch == 0) break;

        if (!write_sectors(lba + written_sectors, write_batch, buf)) {
            success = false;
            break;
        }

        written_sectors += write_batch;

        // 进度显示
        int percent = (int)(written_sectors * 100 / total_sectors);
        printf("\r  进度: %d%% (%lu/%lu 扇区)", percent, written_sectors, total_sectors);
        fflush(stdout);
    }

    printf("\n");
    delete[] buf;
    ::close(img_fd);

    return success;
}

bool BlockDevice::read_to_file(uint64_t lba, uint32_t count, const std::string &output_path)
{
    FILE *fp = fopen(output_path.c_str(), "wb");
    if (!fp) {
        fprintf(stderr, "无法创建文件: %s: %s\n", output_path.c_str(), strerror(errno));
        return false;
    }

    unsigned char *buf = new unsigned char[RW_BATCH_SECTORS * SECTOR_SIZE];
    uint32_t total_read = 0;

    while (total_read < count) {
        uint32_t batch = RW_BATCH_SECTORS;
        if (total_read + batch > count)
            batch = count - total_read;

        if (!read_sectors(lba + total_read, batch, buf)) {
            delete[] buf;
            fclose(fp);
            return false;
        }

        fwrite(buf, SECTOR_SIZE, batch, fp);
        total_read += batch;
    }

    delete[] buf;
    fclose(fp);
    return true;
}

bool BlockDevice::erase_sectors(uint64_t lba, uint64_t count)
{
    unsigned char *zeros = new unsigned char[RW_BATCH_SECTORS * SECTOR_SIZE];
    memset(zeros, 0, RW_BATCH_SECTORS * SECTOR_SIZE);

    uint64_t erased = 0;
    while (erased < count) {
        uint32_t batch = RW_BATCH_SECTORS;
        if (erased + batch > count)
            batch = (uint32_t)(count - erased);

        if (!write_sectors(lba + erased, batch, zeros)) {
            delete[] zeros;
            return false;
        }
        erased += batch;
    }

    delete[] zeros;
    return true;
}

bool BlockDevice::sync()
{
    if (m_fd < 0) return false;
    return fsync(m_fd) == 0;
}
```

---

## 6. rk_gpt.h / rk_gpt.cpp — GPT 分区表生成

```cpp
// rk_gpt.h
#ifndef RK_GPT_H
#define RK_GPT_H

#include "rk_param.h"
#include "rk_disk.h"
#include <cstdint>

// GPT 相关常量
#define GPT_HEADER_SIGNATURE    0x5452415020494645ULL  // "EFI PART"
#define GPT_HEADER_REVISION     0x00010000
#define GPT_ENTRY_SIZE          128
#define GPT_ENTRY_NUMBERS       128
#define MSDOS_MBR_SIGNATURE     0xAA55
#define EFI_PMBR_OSTYPE_EFI_GPT 0xEE

#pragma pack(push, 1)

struct gpt_header {
    uint64_t signature;
    uint32_t revision;
    uint32_t header_size;
    uint32_t header_crc32;
    uint32_t reserved;
    uint64_t my_lba;
    uint64_t alternate_lba;
    uint64_t first_usable_lba;
    uint64_t last_usable_lba;
    uint8_t  disk_guid[16];
    uint64_t partition_entry_lba;
    uint32_t num_partition_entries;
    uint32_t sizeof_partition_entry;
    uint32_t partition_entry_array_crc32;
};

struct gpt_entry {
    uint8_t  partition_type_guid[16];
    uint8_t  unique_partition_guid[16];
    uint64_t starting_lba;
    uint64_t ending_lba;
    uint64_t attributes;
    uint16_t partition_name[36];  // UTF-16
};

struct legacy_mbr {
    uint8_t  boot_code[440];
    uint32_t unique_mbr_signature;
    uint16_t unknown;
    struct {
        uint8_t  status;
        uint8_t  start_chs[3];
        uint8_t  sys_ind;
        uint8_t  end_chs[3];
        uint32_t start_sect;
        uint32_t nr_sects;
    } partition_record[4];
    uint16_t signature;
};

#pragma pack(pop)

// 生成随机 GUID
void gen_random_guid(uint8_t *guid);

// 根据 parameter 数据生成 GPT 并写入块设备
bool write_gpt_to_device(BlockDevice &dev, const ParameterData &param,
                          bool add_bootable_flag = false);

// 从块设备读取并打印现有 GPT
bool read_gpt_from_device(BlockDevice &dev);

#endif
```

```cpp
// rk_gpt.cpp
#include "rk_gpt.h"
#include "crc.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>

void gen_random_guid(uint8_t *guid)
{
    for (int i = 0; i < 16; i++)
        guid[i] = (uint8_t)(rand() & 0xFF);

    // UUID version 4
    guid[6] = (guid[6] & 0x0F) | 0x40;
    guid[8] = (guid[8] & 0x3F) | 0x80;
}

// 小端转换辅助
static inline uint16_t cpu_to_le16(uint16_t v) { return v; }
static inline uint32_t cpu_to_le32(uint32_t v) { return v; }
static inline uint64_t cpu_to_le64(uint64_t v) { return v; }
static inline uint16_t le16_to_cpu(uint16_t v) { return v; }
static inline uint32_t le32_to_cpu(uint32_t v) { return v; }
static inline uint64_t le64_to_cpu(uint64_t v) { return v; }

// 将 ASCII 字符串转为 UTF-16LE 写入 GPT 分区名
static void str_to_utf16(const char *str, uint16_t *dst, int max_chars)
{
    int i;
    for (i = 0; str[i] && i < max_chars; i++)
        dst[i] = cpu_to_le16((uint16_t)str[i]);
    for (; i < max_chars; i++)
        dst[i] = 0;
}

bool write_gpt_to_device(BlockDevice &dev, const ParameterData &param,
                          bool add_bootable_flag)
{
    uint64_t total_sectors = dev.get_total_sectors();
    if (total_sectors == 0) {
        fprintf(stderr, "设备大小为 0，无法写入 GPT\n");
        return false;
    }

    srand((unsigned)time(NULL));

    uint32_t num_partitions = (uint32_t)param.partitions.size();
    if (num_partitions == 0) {
        fprintf(stderr, "没有分区信息\n");
        return false;
    }

    printf("准备写入 GPT 分区表到 %s\n", dev.get_path().c_str());
    printf("磁盘总扇区: %lu, 分区数: %u\n", total_sectors, num_partitions);

    // ===== 1. 构建 Protective MBR (LBA 0) =====
    unsigned char mbr_buf[SECTOR_SIZE];
    memset(mbr_buf, 0, SECTOR_SIZE);
    legacy_mbr *mbr = (legacy_mbr *)mbr_buf;
    mbr->signature = cpu_to_le16(MSDOS_MBR_SIGNATURE);
    mbr->partition_record[0].status = 0x00;
    mbr->partition_record[0].sys_ind = EFI_PMBR_OSTYPE_EFI_GPT;
    mbr->partition_record[0].start_sect = cpu_to_le32(1);
    mbr->partition_record[0].nr_sects = cpu_to_le32(0xFFFFFFFF);

    // ===== 2. 构建 GPT Header (LBA 1) =====
    // 分区表从 LBA 2 开始，占用 32 个扇区 (128 entries * 128 bytes = 16KB = 32 sectors)
    uint32_t gpt_entry_sectors = (GPT_ENTRY_NUMBERS * GPT_ENTRY_SIZE + SECTOR_SIZE - 1) / SECTOR_SIZE;
    uint64_t first_usable = 2 + gpt_entry_sectors;  // 通常 = 34
    uint64_t last_usable = total_sectors - gpt_entry_sectors - 2;  // 留空间给 backup GPT

    unsigned char gpt_header_buf[SECTOR_SIZE];
    memset(gpt_header_buf, 0, SECTOR_SIZE);
    gpt_header *hdr = (gpt_header *)gpt_header_buf;
    hdr->signature = cpu_to_le64(GPT_HEADER_SIGNATURE);
    hdr->revision = cpu_to_le32(GPT_HEADER_REVISION);
    hdr->header_size = cpu_to_le32(sizeof(gpt_header));
    hdr->header_crc32 = 0;
    hdr->reserved = 0;
    hdr->my_lba = cpu_to_le64(1);
    hdr->alternate_lba = cpu_to_le64(total_sectors - 1);
    hdr->first_usable_lba = cpu_to_le64(first_usable);
    hdr->last_usable_lba = cpu_to_le64(last_usable);
    gen_random_guid(hdr->disk_guid);
    hdr->partition_entry_lba = cpu_to_le64(2);
    hdr->num_partition_entries = cpu_to_le32(GPT_ENTRY_NUMBERS);
    hdr->sizeof_partition_entry = cpu_to_le32(GPT_ENTRY_SIZE);

    // ===== 3. 构建分区表项 (LBA 2 ~ LBA 33) =====
    size_t entry_table_size = GPT_ENTRY_NUMBERS * GPT_ENTRY_SIZE;
    unsigned char *entry_table = new unsigned char[entry_table_size];
    memset(entry_table, 0, entry_table_size);

    for (uint32_t i = 0; i < num_partitions; i++) {
        const PartitionInfo &p = param.partitions[i];
        gpt_entry *entry = (gpt_entry *)(entry_table + i * GPT_ENTRY_SIZE);

        // 分区类型 GUID (Linux filesystem data)
        // EBD0A0A2-B9E5-4433-87C0-68B6B72699C7 (Microsoft basic data)
        // 0FC63DAF-8483-4772-8E79-3D69D8477DE4 (Linux filesystem)
        // 使用 Linux filesystem GUID
        uint8_t linux_fs_guid[16] = {
            0xAF, 0x3D, 0xC6, 0x0F, 0x83, 0x84, 0x72, 0x47,
            0x8E, 0x79, 0x3D, 0x69, 0xD8, 0x47, 0x7D, 0xE4
        };
        memcpy(entry->partition_type_guid, linux_fs_guid, 16);

        gen_random_guid(entry->unique_partition_guid);

        uint64_t start_lba = p.offset_sectors;
        uint64_t end_lba;
        if (p.size_sectors == 0xFFFFFFFF) {
            // 最后一个分区占满剩余空间
            end_lba = last_usable;
        } else {
            end_lba = start_lba + p.size_sectors - 1;
        }

        // 确保不超出磁盘范围
        if (end_lba > last_usable)
            end_lba = last_usable;

        entry->starting_lba = cpu_to_le64(start_lba);
        entry->ending_lba = cpu_to_le64(end_lba);
        entry->attributes = cpu_to_le64(0);

        // 设置分区名 (UTF-16LE)
        str_to_utf16(p.name.c_str(), entry->partition_name, 36);

        printf("  分区 %u: %-16s  LBA 0x%08lX - 0x%08lX  (%.2f MB)\n",
               i, p.name.c_str(), start_lba, end_lba,
               (double)(end_lba - start_lba + 1) * SECTOR_SIZE / (1024.0 * 1024.0));
    }

    // 计算分区表 CRC
    uint32_t entry_crc = crc32_le(0, entry_table, (uint32_t)entry_table_size);
    hdr->partition_entry_array_crc32 = cpu_to_le32(entry_crc);

    // 计算 GPT Header CRC
    hdr->header_crc32 = 0;
    hdr->header_crc32 = cpu_to_le32(crc32_le(0, gpt_header_buf, le32_to_cpu(hdr->header_size)));

    // ===== 4. 写入主 GPT =====
    printf("写入 Protective MBR (LBA 0)...\n");
    if (!dev.write_sectors(0, 1, mbr_buf)) {
        fprintf(stderr, "写入 MBR 失败\n");
        delete[] entry_table;
        return false;
    }

    printf("写入 GPT Header (LBA 1)...\n");
    if (!dev.write_sectors(1, 1, gpt_header_buf)) {
        fprintf(stderr, "写入 GPT Header 失败\n");
        delete[] entry_table;
        return false;
    }

    printf("写入分区表 (LBA 2-%u)...\n", 1 + (uint32_t)gpt_entry_sectors);
    if (!dev.write_sectors(2, gpt_entry_sectors, entry_table)) {
        fprintf(stderr, "写入分区表失败\n");
        delete[] entry_table;
        return false;
    }

    // ===== 5. 构建并写入备份 GPT (在磁盘末尾) =====
    printf("写入备份 GPT...\n");

    // 备份分区表: 在 total_sectors - 1 - gpt_entry_sectors 位置
    uint64_t backup_entry_lba = total_sectors - 1 - gpt_entry_sectors;
    if (!dev.write_sectors(backup_entry_lba, gpt_entry_sectors, entry_table)) {
        fprintf(stderr, "写入备份分区表失败\n");
        delete[] entry_table;
        return false;
    }

    // 备份 GPT Header: 在 total_sectors - 1 位置
    gpt_header *backup_hdr = (gpt_header *)gpt_header_buf;
    uint64_t tmp;
    tmp = backup_hdr->my_lba;
    backup_hdr->my_lba = backup_hdr->alternate_lba;
    backup_hdr->alternate_lba = tmp;
    backup_hdr->partition_entry_lba = cpu_to_le64(backup_entry_lba);
    backup_hdr->header_crc32 = 0;
    backup_hdr->header_crc32 = cpu_to_le32(
        crc32_le(0, gpt_header_buf, le32_to_cpu(backup_hdr->header_size)));

    if (!dev.write_sectors(total_sectors - 1, 1, gpt_header_buf)) {
        fprintf(stderr, "写入备份 GPT Header 失败\n");
        delete[] entry_table;
        return false;
    }

    delete[] entry_table;

    dev.sync();
    printf("\nGPT 分区表写入成功!\n");
    return true;
}

bool read_gpt_from_device(BlockDevice &dev)
{
    unsigned char gpt_header_buf[SECTOR_SIZE];
    if (!dev.read_sectors(1, 1, gpt_header_buf)) {
        fprintf(stderr, "读取 GPT Header 失败\n");
        return false;
    }

    gpt_header *hdr = (gpt_header *)gpt_header_buf;
    if (le64_to_cpu(hdr->signature) != GPT_HEADER_SIGNATURE) {
        fprintf(stderr, "未找到有效的 GPT 签名\n");
        return false;
    }

    uint32_t num_entries = le32_to_cpu(hdr->num_partition_entries);
    uint32_t entry_size = le32_to_cpu(hdr->sizeof_partition_entry);
    uint64_t entry_lba = le64_to_cpu(hdr->partition_entry_lba);

    printf("\nGPT 分区信息:\n");
    printf("  磁盘 GUID: ");
    for (int i = 0; i < 16; i++) printf("%02X", hdr->disk_guid[i]);
    printf("\n");
    printf("  First Usable LBA: %lu\n", le64_to_cpu(hdr->first_usable_lba));
    printf("  Last Usable LBA:  %lu\n", le64_to_cpu(hdr->last_usable_lba));

    uint32_t gpt_entry_sectors = (num_entries * entry_size + SECTOR_SIZE - 1) / SECTOR_SIZE;
    unsigned char *entry_table = new unsigned char[gpt_entry_sectors * SECTOR_SIZE];
    if (!dev.read_sectors(entry_lba, gpt_entry_sectors, entry_table)) {
        delete[] entry_table;
        return false;
    }

    printf("\n%-4s %-16s %-14s %-14s\n", "No", "Name", "Start LBA", "End LBA");
    printf("---- ---------------- -------------- --------------\n");

    uint8_t zero_entry[GPT_ENTRY_SIZE];
    memset(zero_entry, 0, GPT_ENTRY_SIZE);

    for (uint32_t i = 0; i < num_entries; i++) {
        gpt_entry *entry = (gpt_entry *)(entry_table + i * entry_size);
        if (memcmp(entry, zero_entry, GPT_ENTRY_SIZE) == 0)
            continue;

        char name[37] = {0};
        for (int j = 0; j < 36; j++) {
            uint16_t c = le16_to_cpu(entry->partition_name[j]);
            if (c == 0) break;
            name[j] = (char)(c & 0xFF);
        }

        printf("%-4u %-16s 0x%010lX   0x%010lX\n", i, name,
               le64_to_cpu(entry->starting_lba),
               le64_to_cpu(entry->ending_lba));
    }

    delete[] entry_table;
    return true;
}
```

---

## 7. main.cpp — 主程序入口

```cpp
// main.cpp
#include "rk_param.h"
#include "rk_disk.h"
#include "rk_gpt.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>
#include <unistd.h>
#include <getopt.h>

static const char *VERSION = "1.0.0";

static void usage(const char *prog)
{
    printf("\n");
    printf("rkdisktool v%s - Rockchip 本地磁盘烧写工具\n", VERSION);
    printf("不依赖 libusb，直接操作本地块设备\n\n");
    printf("用法: %s <命令> [选项]\n\n", prog);
    printf("命令:\n");
    printf("  gpt <parameter> <device>           根据 parameter 文件写入 GPT 分区表\n");
    printf("  wl  <offset> <image> <device>      写入镜像到指定扇区偏移\n");
    printf("  wlx <partname> <image> <device>    写入镜像到指定分区名 (需先写 GPT)\n");
    printf("  rl  <offset> <count> <file> <dev>  读取扇区到文件\n");
    printf("  ppt <device>                       打印设备的分区表\n");
    printf("  pp  <parameter>                    打印 parameter 文件内容\n");
    printf("  erase <offset> <count> <device>    擦除指定扇区范围 (写零)\n");
    printf("  part <device>                      调用 parted 生成分区 (交互确认)\n");
    printf("\n");
    printf("示例:\n");
    printf("  %s pp parameter.txt                          # 查看分区布局\n", prog);
    printf("  %s gpt parameter.txt /dev/sda                # 写 GPT 分区表\n", prog);
    printf("  %s wl 0x4000 uboot.img /dev/sda              # 写 uboot 到 LBA 0x4000\n", prog);
    printf("  %s wlx rootfs rootfs.img /dev/sda            # 写 rootfs 到 rootfs 分区\n", prog);
    printf("  %s rl 0x4000 0x2000 dump.bin /dev/sda        # 读取扇区\n", prog);
    printf("  %s ppt /dev/sda                              # 查看分区表\n", prog);
    printf("\n");
    printf("注意: 写入操作会直接修改目标磁盘，请确认设备路径正确！\n");
    printf("      建议先用 %s pp 和 %s ppt 确认信息。\n\n", prog, prog);
}

// 安全的设备检查 —— 防止误操作根分区等
static bool safety_check_device(const std::string &device)
{
    // 检查是否是常见系统盘
    if (device == "/dev/sda" || device == "/dev/nvme0n1") {
        printf("\n");
        printf("========================================\n");
        printf("  警告: 你正在操作 %s\n", device.c_str());
        printf("  这可能会破坏你的系统!\n");
        printf("========================================\n");
        printf("确认继续? 输入 YES (大写): ");
        fflush(stdout);

        char buf[16];
        if (!fgets(buf, sizeof(buf), stdin))
            return false;
        if (strncmp(buf, "YES", 3) != 0) {
            printf("已取消操作\n");
            return false;
        }
    }

    // 检查设备是否存在
    if (access(device.c_str(), F_OK) != 0) {
        fprintf(stderr, "设备 %s 不存在\n", device.c_str());
        return false;
    }

    return true;
}

// 获取分区的 LBA 信息（从磁盘上的 GPT 读取）
static bool get_partition_lba(BlockDevice &dev, const std::string &name,
                               uint64_t &start_lba, uint64_t &end_lba)
{
    unsigned char gpt_header_buf[SECTOR_SIZE];
    if (!dev.read_sectors(1, 1, gpt_header_buf)) return false;

    gpt_header *hdr = (gpt_header *)gpt_header_buf;
    if (hdr->signature != GPT_HEADER_SIGNATURE) {
        fprintf(stderr, "设备上未找到有效 GPT\n");
        return false;
    }

    uint32_t num_entries = le32_to_cpu(hdr->num_partition_entries);
    uint32_t entry_size = le32_to_cpu(hdr->sizeof_partition_entry);
    uint64_t entry_lba = le64_to_cpu(hdr->partition_entry_lba);
    uint32_t entry_sectors = (num_entries * entry_size + SECTOR_SIZE - 1) / SECTOR_SIZE;

    unsigned char *table = new unsigned char[entry_sectors * SECTOR_SIZE];
    if (!dev.read_sectors(entry_lba, entry_sectors, table)) {
        delete[] table;
        return false;
    }

    bool found = false;
    for (uint32_t i = 0; i < num_entries; i++) {
        gpt_entry *e = (gpt_entry *)(table + i * entry_size);

        // 跳过空条目
        bool all_zero = true;
        for (int j = 0; j < 16; j++) {
            if (e->partition_type_guid[j] != 0) { all_zero = false; break; }
        }
        if (all_zero) continue;

        // 读取分区名
        char part_name[37] = {0};
        for (int j = 0; j < 36; j++) {
            uint16_t c = e->partition_name[j];  // 已经是小端
            if (c == 0) break;
            part_name[j] = (char)(c & 0xFF);
        }

        if (strcasecmp(part_name, name.c_str()) == 0) {
            start_lba = e->starting_lba;
            end_lba = e->ending_lba;
            found = true;
            break;
        }
    }

    delete[] table;
    return found;
}

static int cmd_pp(int argc, char *argv[])
{
    if (argc < 3) {
        fprintf(stderr, "用法: %s pp <parameter_file>\n", argv[0]);
        return 1;
    }

    ParameterData data;
    if (!parse_parameter_file(argv[2], data)) {
        fprintf(stderr, "解析 parameter 文件失败\n");
        return 1;
    }

    printf("Parameter 文件: %s\n", argv[2]);
    if (!data.firmware_ver.empty())
        printf("  Firmware Ver:  %s\n", data.firmware_ver.c_str());
    if (!data.machine_model.empty())
        printf("  Machine Model: %s\n", data.machine_model.c_str());

    print_partitions(data);
    return 0;
}

static int cmd_gpt(int argc, char *argv[])
{
    if (argc < 4) {
        fprintf(stderr, "用法: %s gpt <parameter_file> <device>\n", argv[0]);
        return 1;
    }

    std::string param_file = argv[2];
    std::string device_path = argv[3];

    if (!safety_check_device(device_path)) return 1;

    ParameterData data;
    if (!parse_parameter_file(param_file, data)) {
        fprintf(stderr, "解析 parameter 文件失败\n");
        return 1;
    }

    printf("将写入以下分区表到 %s:\n", device_path.c_str());
    print_partitions(data);

    BlockDevice dev;
    if (!dev.open(device_path)) return 1;

    bool ret = write_gpt_to_device(dev, data);
    dev.close();
    return ret ? 0 : 1;
}

static int cmd_wl(int argc, char *argv[])
{
    if (argc < 5) {
        fprintf(stderr, "用法: %s wl <offset_sectors> <image_file> <device>\n", argv[0]);
        return 1;
    }

    uint64_t offset = strtoul(argv[2], nullptr, 0);
    std::string image = argv[3];
    std::string device_path = argv[4];

    if (!safety_check_device(device_path)) return 1;

    BlockDevice dev;
    if (!dev.open(device_path)) return 1;

    bool ret = dev.write_image(offset, image);
    dev.sync();
    dev.close();

    printf(ret ? "写入完成\n" : "写入失败\n");
    return ret ? 0 : 1;
}

static int cmd_wlx(int argc, char *argv[])
{
    if (argc < 5) {
        fprintf(stderr, "用法: %s wlx <partition_name> <image_file> <device>\n", argv[0]);
        return 1;
    }

    std::string partname = argv[2];
    std::string image = argv[3];
    std::string device_path = argv[4];

    if (!safety_check_device(device_path)) return 1;

    BlockDevice dev;
    if (!dev.open(device_path)) return 1;

    uint64_t start_lba, end_lba;
    if (!get_partition_lba(dev, partname, start_lba, end_lba)) {
        fprintf(stderr, "未找到分区: %s\n", partname.c_str());
        dev.close();
        return 1;
    }

    printf("找到分区 '%s': LBA 0x%lX - 0x%lX (%.2f MB)\n",
           partname.c_str(), start_lba, end_lba,
           (double)(end_lba - start_lba + 1) * SECTOR_SIZE / (1024.0 * 1024.0));

    bool ret = dev.write_image(start_lba, image);
    dev.sync();
    dev.close();

    printf(ret ? "写入完成\n" : "写入失败\n");
    return ret ? 0 : 1;
}

static int cmd_rl(int argc, char *argv[])
{
    if (argc < 6) {
        fprintf(stderr, "用法: %s rl <offset> <sector_count> <output_file> <device>\n", argv[0]);
        return 1;
    }

    uint64_t offset = strtoul(argv[2], nullptr, 0);
    uint32_t count = (uint32_t)strtoul(argv[3], nullptr, 0);
    std::string outfile = argv[4];
    std::string device_path = argv[5];

    BlockDevice dev;
    if (!dev.open(device_path, true)) return 1;

    bool ret = dev.read_to_file(offset, count, outfile);
    dev.close();

    printf(ret ? "读取完成\n" : "读取失败\n");
    return ret ? 0 : 1;
}

static int cmd_ppt(int argc, char *argv[])
{
    if (argc < 3) {
        fprintf(stderr, "用法: %s ppt <device>\n", argv[0]);
        return 1;
    }

    std::string device_path = argv[2];
    BlockDevice dev;
    if (!dev.open(device_path, true)) return 1;

    bool ret = read_gpt_from_device(dev);
    dev.close();
    return ret ? 0 : 1;
}

static int cmd_erase(int argc, char *argv[])
{
    if (argc < 5) {
        fprintf(stderr, "用法: %s erase <offset> <sector_count> <device>\n", argv[0]);
        return 1;
    }

    uint64_t offset = strtoul(argv[2], nullptr, 0);
    uint64_t count = strtoul(argv[3], nullptr, 0);
    std::string device_path = argv[4];

    if (!safety_check_device(device_path)) return 1;

    BlockDevice dev;
    if (!dev.open(device_path)) return 1;

    printf("擦除 %lu 个扇区 (从 LBA 0x%lX 开始)...\n", count, offset);
    bool ret = dev.erase_sectors(offset, count);
    dev.sync();
    dev.close();

    printf(ret ? "擦除完成\n" : "擦除失败\n");
    return ret ? 0 : 1;
}

// 一键烧写: 解析 parameter，写 GPT，然后按分区写入所有指定的镜像
static int cmd_flash(int argc, char *argv[])
{
    // rkdisktool flash <parameter> <device> [part1=img1] [part2=img2] ...
    if (argc < 4) {
        fprintf(stderr, "用法: %s flash <parameter_file> <device> [partition=image ...]\n", argv[0]);
        printf("\n示例:\n");
        printf("  %s flash parameter.txt /dev/sda uboot=uboot.img boot=boot.img rootfs=rootfs.img\n\n", argv[0]);
        return 1;
    }

    std::string param_file = argv[2];
    std::string device_path = argv[3];

    if (!safety_check_device(device_path)) return 1;

    // 解析 parameter
    ParameterData data;
    if (!parse_parameter_file(param_file, data)) {
        fprintf(stderr, "解析 parameter 文件失败\n");
        return 1;
    }

    printf("分区布局:\n");
    print_partitions(data);

    // 解析 partition=image 映射
    std::map<std::string, std::string> image_map;
    for (int i = 4; i < argc; i++) {
        std::string arg = argv[i];
        size_t eq = arg.find('=');
        if (eq == std::string::npos) {
            fprintf(stderr, "无效参数: %s (格式应为 partition=image)\n", arg.c_str());
            return 1;
        }
        std::string part = arg.substr(0, eq);
        std::string img = arg.substr(eq + 1);
        image_map[part] = img;
        printf("  分区 %-16s -> %s\n", part.c_str(), img.c_str());
    }

    // 确认操作
    printf("\n即将执行以下操作:\n");
    printf("  1. 写入 GPT 分区表到 %s\n", device_path.c_str());
    for (auto &kv : image_map)
        printf("  2. 写入 %s 到分区 %s\n", kv.second.c_str(), kv.first.c_str());
    printf("\n确认继续? (y/N): ");
    fflush(stdout);
    char confirm[8];
    if (!fgets(confirm, sizeof(confirm), stdin) || (confirm[0] != 'y' && confirm[0] != 'Y')) {
        printf("已取消\n");
        return 0;
    }

    // 打开设备
    BlockDevice dev;
    if (!dev.open(device_path)) return 1;

    // 1. 写 GPT
    printf("\n===== 步骤 1: 写入 GPT 分区表 =====\n");
    if (!write_gpt_to_device(dev, data)) {
        dev.close();
        return 1;
    }

    // 2. 写镜像
    for (auto &kv : image_map) {
        printf("\n===== 写入分区: %s = %s =====\n", kv.first.c_str(), kv.second.c_str());

        uint64_t start_lba, end_lba;
        if (!get_partition_lba(dev, kv.first, start_lba, end_lba)) {
            fprintf(stderr, "未找到分区: %s, 跳过\n", kv.first.c_str());
            continue;
        }

        if (!dev.write_image(start_lba, kv.second)) {
            fprintf(stderr, "写入 %s 失败\n", kv.first.c_str());
            dev.close();
            return 1;
        }
    }

    dev.sync();
    dev.close();
    printf("\n===== 全部完成! =====\n");
    return 0;
}

#include <map>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        usage(argv[0]);
        return 0;
    }

    std::string cmd = argv[1];
    std::transform(cmd.begin(), cmd.end(), cmd.begin(), ::toupper);

    if (cmd == "-H" || cmd == "--HELP" || cmd == "HELP") {
        usage(argv[0]);
        return 0;
    }
    if (cmd == "-V" || cmd == "--VERSION") {
        printf("rkdisktool v%s\n", VERSION);
        return 0;
    }
    if (cmd == "PP")  return cmd_pp(argc, argv);
    if (cmd == "GPT") return cmd_gpt(argc, argv);
    if (cmd == "WL")  return cmd_wl(argc, argv);
    if (cmd == "WLX") return cmd_wlx(argc, argv);
    if (cmd == "RL")  return cmd_rl(argc, argv);
    if (cmd == "PPT") return cmd_ppt(argc, argv);
    if (cmd == "ERASE") return cmd_erase(argc, argv);
    if (cmd == "FLASH") return cmd_flash(argc, argv);

    fprintf(stderr, "未知命令: %s\n", argv[1]);
    usage(argv[0]);
    return 1;
}
```

---

## 8. 编译和使用

```bash
# 编译
mkdir build && cd build
cmake ..
make -j$(nproc)

# 使用示例

# 1) 查看 parameter 文件内容
./rkdisktool pp ../parameter.txt

# 2) 写入 GPT 分区表到 U 盘（注意确认设备！）
sudo ./rkdisktool gpt ../parameter.txt /dev/sdb

# 3) 按分区名写入镜像
sudo ./rkdisktool wlx uboot    uboot.img    /dev/sdb
sudo ./rkdisktool wlx boot     boot.img     /dev/sdb
sudo ./rkdisktool wlx rootfs   rootfs.img   /dev/sdb

# 4) 一键烧写
sudo ./rkdisktool flash ../parameter.txt /dev/sdb \
    uboot=uboot.img \
    boot=boot.img \
    rootfs=rootfs.img

# 5) 查看磁盘上的分区表
sudo ./rkdisktool ppt /dev/sdb

# 6) 读取扇区
./rkdisktool rl 0x4000 0x2000 dump.bin /dev/sdb

# 7) 擦除扇区
sudo ./rkdisktool erase 0x4000 0x2000 /dev/sdb
```

---

## 核心设计对比总结

```
原始 rkdeveloptool 流程:
  parameter.txt → parse → RKU_WriteLBA(USB) → Rockchip SoC

新 rkdisktool 流程:
  parameter.txt → parse → pwrite(fd) → /dev/sdX (本地磁盘)
```

| 模块 | 原始实现 | 新实现 |
|------|---------|--------|
| 通信层 | `CRKUsbComm` (libusb) | `BlockDevice` (系统调用) |
| 写扇区 | `pComm->RKU_WriteLBA()` | `dev.write_sectors()` → `write()` |
| 读扇区 | `pComm->RKU_ReadLBA()` | `dev.read_sectors()` → `read()` |
| 设备发现 | `CRKScan` (USB枚举) | 用户直接指定 `/dev/sdX` |
| 磁盘大小 | `RKU_ReadFlashInfo()` | `ioctl(BLKGETSIZE64)` |
| GPT 生成 | `create_gpt_buffer()` | `write_gpt_to_device()` |
| 依赖 | libusb-1.0 | 仅 libc/libstdc++ |

新工具完全独立于 libusb，只依赖标准 C/C++ 库和 Linux 内核接口，可以直接对任何本地块设备进行分区和镜像烧写。