#!/bin/bash
#exam2.sh

echo -n "출력할 단수를 입력해주세요: "
read num

for ((i=1; i<=9; i++))
do 
    let "temp=i*num"
    echo "$num x $i = $temp"
done