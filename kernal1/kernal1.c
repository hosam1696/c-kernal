#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>



int proc_init(void) {
    printk("(kernal1 Module): Initializing\n");
    return 0;
} 


void proc_exit(void) {
    printk("(kernal1 Module): removing\n");
}


module_init(proc_init);
module_exit(proc_exit);