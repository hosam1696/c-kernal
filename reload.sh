#!/bin/bash

###
# This is a bashscript for watching changing in c files
# and automate compiling , build the file
# Author: Hosam Elnabawy  
###

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
    gcc $myFile -o out && ./out
done

