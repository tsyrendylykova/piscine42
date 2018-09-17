cat /etc/passwd | sed '/^#/d' | sed '1d; n; d' | sed 's/:\(.*\)//g' | rev | sort -r  | sed -n "$FT_LINE1,$FT_LINE2 p" | tr "\n" ", " | sed "s/,/, /g" | tr "\n" "." | sed "s/, \././"
