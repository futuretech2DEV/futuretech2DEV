cat /etc/passwd | sed '/^#/d' | awk "NR % 2 == 0" | awk -F ":" '{  print $1 }' | rev | sort -fnr \
|awk 'FNR >= 7 && FNR <= 15' 
#| tr '\n' ' ' 
#| sed 's+ +, +g' \
#| sed 's+, $+.+g' \
#| tr -d '\n'

