find . -type f -or -type d |wc -l|awk '{$1=$1;print}'
