if test $# -eq 1
 then
 cat $1 | sort
else
 echo $2 >> $1
 sort $1 >  /dev/null
fi