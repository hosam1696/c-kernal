#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>



int proc_init(void) {
    printk("Hello\n");
    return 0;
} 


void proc_exit(void) {
    printk("GoodBye\n");
}


module_init(proc_init);
module_exit(proc_exit);