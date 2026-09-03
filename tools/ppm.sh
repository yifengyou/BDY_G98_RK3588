#!/bin/bash
# 用法: ./jpg2ppm.sh your_image.jpg
# 输出: 同目录下生成 your_image.ppm（224色，ASCII格式）

if [ $# -ne 1 ]; then
    echo "Usage: $0 input.jpg"
    exit 1
fi

input="$1"
output="${input%.*}.ppm"

# 检查必需的命令是否存在
for cmd in jpegtopnm pnmquant pnmtoplainpnm; do
    if ! command -v "$cmd" >/dev/null 2>&1; then
        echo "Error: $cmd not found. Please install netpbm."
        echo "On Debian/Ubuntu: sudo apt install netpbm"
        echo "On RHEL/CentOS: sudo yum install netpbm-progs"
        exit 1
    fi
done

# 执行转换：解码JPG -> 量化至224色 -> 输出纯文本PPM
jpegtopnm "$input" | pnmquant 224 | pnmtoplainpnm > "$output"

if [ $? -eq 0 ]; then
    echo "Successfully converted to $output"
else
    echo "Conversion failed."
    exit 1
fi
