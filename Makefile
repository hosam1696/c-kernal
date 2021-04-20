obj-m += kernal1.o
KERNELDIR ?= /lib/modules/$(shell uname -r)/build

all:
	${MAKE} -C /usr/src/linux-headers-${shell uname -r} SUBDIRS=${PWD} modules

clear:
	rm -rf *.o *.ko *.mod.* *.sysvers *.order
