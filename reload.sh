#!/bin/bash
myFile=$1

if [ -z $myFile ];
then
    myFile="one.c"
fi

echo "Start Watching file .. [" $myFile "]"

while true
do
    sleep 2
    printf "\033c"
    gcc $myFile && ./a.out
done

