obj-m += kernal-2.o
KERNELDIR ?= /lib/modules/$(shell uname -r)/build

all:
	${MAKE} -C /usr/src/linux-headers-${shell uname -r} M=${PWD} modules

clear:
	rm -rf *.o *.ko *.mod.* *.sysvers *.order .*.cmd

test:
	../test_mod.sh kernal-2 kernal2
