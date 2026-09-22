#!/bin/bash
# 用法: ./bmp.sh your_image.png
# 输出: 同目录下生成 your_image.bmp

if [ $# -ne 1 ]; then
    echo "Usage: $0 input.png"
    exit 1
fi

input="$1"
output="${input%.*}.bmp"

ffmpeg -y -i ${input} -vf scale=512:512 -pix_fmt bgr24 ${output}

exit 0

magick ${input} \
  -resize 512x512! \
  -depth 24 \
  -define bmp:format=bmp4 \
  -strip \
  ${output}

