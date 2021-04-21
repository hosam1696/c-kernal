#!/bin/bash

echo Making \["$1"\]

sudo dmesg -C
echo \*\) Installing \`"$1"\` Module
sudo insmod "$1".ko
if [ $2 ];
    then
    cat /proc/"$2"
    fi

echo \*\) Removing \`"$1"\` Module After 3 seconds
sleep 3
sudo rmmod "$1"
sudo dmesg
if [ $2 ];
    then
    cat /proc/"$2"
    fi