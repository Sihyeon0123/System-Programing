#!/bin/bash
#exam3.sh

echo -n "피보나치 수열의 길이를 입력하세요: "
read len

# 초기 변수 설정
a=0
b=1
count=1

# 피보나치 수열 출력
while [ $count -le $len ]; do
    echo -n "$a "
    let "sum=a+b"
    a=$b
    b=$sum
    let "count++"
done
echo ""
