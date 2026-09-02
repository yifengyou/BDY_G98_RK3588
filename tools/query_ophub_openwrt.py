#!/usr/bin/env python3
import requests
import json
import time
import os

# ================= 配置区域 =================
REPO = "ophub/amlogic-s9xxx-openwrt"
OUTPUT_FILE = "ophub_openwrt.json"
FILTER_KEYWORD = "g98"  # 过滤关键词（不区分大小写）
# 强烈建议填写 GitHub Personal Access Token
GITHUB_TOKEN = os.environ.get("GITHUB_TOKEN", "")
# ==========================================


def get_headers():
    headers = {
        "Accept": "application/vnd.github+json",
        "X-GitHub-Api-Version": "2022-11-28"
    }
    if GITHUB_TOKEN:
        headers["Authorization"] = f"Bearer {GITHUB_TOKEN}"
    return headers


def fetch_and_filter():
    url = f"https://api.github.com/repos/{REPO}/releases"
    params = {"per_page": 100, "page": 1}
    headers = get_headers()

    matched_files = []
    total_releases = 0
    keyword_lower = FILTER_KEYWORD.lower()

    print(f"🔍 开始获取 {REPO} 中包含 '{FILTER_KEYWORD}' 的文件...")
    if not GITHUB_TOKEN:
        print("⚠️  警告: 未设置 GITHUB_TOKEN，可能会触发速率限制！\n")

    while True:
        try:
            resp = requests.get(url, headers=headers, params=params, timeout=30)

            # 处理速率限制
            remaining = int(resp.headers.get("X-RateLimit-Remaining", 0))
            if resp.status_code == 403 and remaining == 0:
                reset_time = int(resp.headers.get("X-RateLimit-Reset", 0))
                wait = max(reset_time - time.time(), 0) + 5
                print(f"\n⏳ 触发速率限制，等待 {wait:.0f} 秒后继续...")
                time.sleep(wait)
                continue

            resp.raise_for_status()
            releases = resp.json()

            if not releases:
                break

            # 遍历当前页的 Release 和 Assets，进行过滤
            for release in releases:
                tag = release.get("tag_name", "unknown")
                for asset in release.get("assets", []):
                    name = asset["name"]
                    if keyword_lower in name.lower():
                        entry = {
                            "tag": tag,
                            "name": name,
                            "size": asset["size"],
                            "download_url": asset["browser_download_url"],
                            "created_at": asset["created_at"]
                        }
                        matched_files.append(entry)
                        # ✅ 实时打印匹配的完整URL
                        print(f"  🎯 [{tag}] {name}")
                        print(f"     🔗 {asset['browser_download_url']}")

            total_releases += len(releases)
            print(f"  📄 第 {params['page']} 页扫描完成 | "
                  f"累计匹配: {len(matched_files)} | 剩余配额: {remaining}\n")

            # 增量保存匹配结果
            with open(OUTPUT_FILE, "w", encoding="utf-8") as f:
                json.dump(matched_files, f, ensure_ascii=False, indent=2)

            # 检查是否有下一页
            link_header = resp.headers.get("Link", "")
            if 'rel="next"' not in link_header:
                break

            params["page"] += 1
            time.sleep(0.5)

        except requests.exceptions.RequestException as e:
            print(f"\n❌ 请求失败: {e}")
            print(f"已保存 {len(matched_files)} 条匹配记录到 {OUTPUT_FILE}")
            break

    # 最终汇总
    print("=" * 70)
    print(f"✅ 扫描完成! 共扫描 {total_releases} 个 Release")
    print(f"🎯 匹配 '{FILTER_KEYWORD}' 的文件数: {len(matched_files)}")
    print(f"📄 结果已保存至: {os.path.abspath(OUTPUT_FILE)}")
    print("=" * 70)

    # 最终再列出一次所有URL方便复制
    if matched_files:
        print("\n📋 所有匹配文件URL汇总:")
        for i, item in enumerate(matched_files, 1):
            print(f"* {item['download_url']}")

    return matched_files


if __name__ == "__main__":
    fetch_and_filter()
