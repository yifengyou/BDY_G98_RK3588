#!/usr/bin/env python3
"""
png2bmp_uefi.py
将 PNG 转换为 EDK2/UEFI 兼容的未压缩 24bpp BMP（BITMAPFILEHEADER + BITMAPINFOHEADER）

用法:
    python png2bmp_uefi.py input.png output.bmp [--max-w 1920] [--max-h 1080]
"""

import sys
import argparse
from PIL import Image


def png_to_uefi_bmp(png_path: str, bmp_path: str, max_w: int = 300, max_h: int = 300):
    img = Image.open(png_path)

    # UEFI BMP 不支持 alpha 通道，统一转成 24bpp RGB
    if img.mode != "RGB":
        # 如果有透明通道，先在白色（或指定色）背景上合成，避免透明区域花屏
        if img.mode in ("RGBA", "LA") or "transparency" in img.info:
            bg = Image.new("RGB", img.size, (0, 0, 0))  # 背景色可按需改成 (255,255,255)
            img = img.convert("RGBA")
            bg.paste(img, mask=img.split()[-1])
            img = bg
        else:
            img = img.convert("RGB")

    # 可选：限制分辨率，避免超过屏幕 GOP 分辨率导致显示异常
    if max_w and max_h:
        img.thumbnail((max_w, max_h), Image.LANCZOS)

    # Pillow 默认保存的 BMP 就是未压缩 BI_RGB 格式，符合 UEFI 要求
    img.save(bmp_path, "BMP")

    print(f"[OK] {png_path} -> {bmp_path}")
    print(f"     size = {img.size}, mode = {img.mode}")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Convert PNG to UEFI-compatible 24bpp BMP")
    parser.add_argument("input", help="输入 PNG 文件")
    parser.add_argument("output", help="输出 BMP 文件")
    parser.add_argument("--max-w", type=int, default=None, help="限制最大宽度")
    parser.add_argument("--max-h", type=int, default=None, help="限制最大高度")
    args = parser.parse_args()

    png_to_uefi_bmp(args.input, args.output, args.max_w, args.max_h)
