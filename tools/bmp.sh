#!/bin/bash
# 用法: ./bmp.sh your_image.png
# 输出: 同目录下生成 your_image.bmp (UEFI LogoDxe 兼容格式)

set -euo pipefail

if [ $# -ne 1 ]; then
    echo "Usage: $0 <input_image>"
    exit 1
fi

input="$1"
output="${input%.*}.bmp"

if [ ! -f "$input" ]; then
    echo "Error: File '$input' not found."
    exit 1
fi

# 优先使用 ImageMagick（可精确控制 BMP 版本）
if command -v convert &>/dev/null; then
    echo "[INFO] Using ImageMagick (recommended)"
    convert "$input" \
        -resize 512x512 \
        -gravity center -extent 512x512 \
        -background black \
        -flatten \
        -define bmp:format=bmp4 \
        -type TrueColor \
        "$output"
# 回退到 ffmpeg
elif command -v ffmpeg &>/dev/null; then
    echo "[WARN] ImageMagick not found, falling back to ffmpeg"
    ffmpeg -y -i "$input" \
        -vf "scale=512:512:force_original_aspect_ratio=decrease,pad=512:512:(ow-iw)/2:(oh-ih)/2:black" \
        -pix_fmt bgr24 \
        -vcodec bmp \
        "$output"
else
    echo "Error: Neither ImageMagick nor ffmpeg found."
    exit 1
fi

# ========== 关键：验证输出格式 ==========
file_info=$(file "$output")
echo "[CHECK] $file_info"

if echo "$file_info" | grep -q "bits offset 138"; then
    echo "✅ PASS: BMP format is UEFI-compatible (V4, offset=138)"
elif echo "$file_info" | grep -q "bits offset 54"; then
    echo "❌ FAIL: BMP is V3 format (offset=54), LogoDxe may reject it!"
    echo "   Please install ImageMagick: apt install imagemagick / yum install ImageMagick"
    exit 1
else
    echo "⚠️  WARN: Unrecognized BMP format, please verify manually."
fi
