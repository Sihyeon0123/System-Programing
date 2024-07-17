#!/bin/bash
#exam4.sh

echo -n "숫자 3개를 입력해주세요: "
read a b c

min=$a
max=$a

# max찾기
if [ $b -gt $max ]; then
    max=$b
fi
if [ $c -gt $max ]; then
    max=$c
fi

# min찾기
if [ $b -lt $min ]; then
    min=$b
fi
if [ $c -lt $min ]; then
    min=$c
fi

echo "가장 작은값: $min"
echo "가장 큰 값: $max"