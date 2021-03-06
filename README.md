# ZAG CSE 3rd YEAR OPERATION SYSSTEM PROJECT 1 

this file to index what i need for implementing the Kernal task

Github repo: [https://github.com/hosam1696/c-kernal](https://github.com/hosam1696/c-kernal)


<br>

## Tasks

1. Design a kernal module that create /proc/jiffies file that reports the current value of jiffies



2. Design a kernal module taht creates a /proc/seconds that reports the time elapsed since the kernal was created in seconds


## Preparation

```bash
$ sudo apt update 
```


```bash
$ sudo apt install gcc  
```


```bash
$ sudo apt install build-essitial
```

## commands
<br>

for showing log messages

```bash
$ dmesg 
```

Add module to kernal
```bash
$ insmod [file].ko
```

List modules in kernal
```bash
$ lsmod 
```

Remove modules from kernal
```bash
$ rmmod
```

## Errors & Fixes

- First time i run `make` command i ran into an error

![](screens/1.png)

__solution__
> sudo apt install libelf-dev

<br>  

## Helper Files

- [**relaod.sh**](./reload.sh)

automate building and running c files
instead of every single change in the file i entered  `gcc -o [out] [file] && [out directory]`

i simply run it prints the output of the file on the terminal
usage `relaod [file]`




![](./screens/5.png)

- [**test_mod.sh**](./test_mod.sh)

run several command in **Makefile** _test_ flag

usage  `make test`


![](./screens/6.png)


<br>  

## Screenshots & Work 

1.  **kernal1**

![](./screens/2.png)


1.  **Jiffies**

![](./screens/3.png)

![](./screens/4.png)