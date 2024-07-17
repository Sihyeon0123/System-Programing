#!/bin/bash
#exam6.sh

i=5
while [ $i -ge 0 ];
do
    for ((j=0; j < i; j++))
    do
        echo -n "*"
    done

    # 줄바꿈
    echo
    let "i--"
done