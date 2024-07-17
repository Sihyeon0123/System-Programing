#!/bin/bash
#exam1.sh

# for을 이용하여 현재 디렉토리의 모든 항목에 대해서 반복
for item in *; do
    # "-f" 옵션으로 일반 파일인지 확인
    if [ -f "$item" ]; then
        echo "$item"
    fi
done
echo "exam1.sh 작동됨"