#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/uaccess.h>
#include <asm/uaccess.h>
#include <linux/proc_fs.h>
#include <linux/jiffies.h>
// #include <sys/types.h>

#define BUFFER_SIZE 128
#define PROC_NAME "jiffies"

unsigned long jf;
int sec;

ssize_t proc_read(struct file *file, char __user *usr_buf, size_t count, loff_t *pos);

static struct file_operations proc_ops = {
    .owner = THIS_MODULE,
    .read = proc_read};

int proc_init(void)
{
    jf = jiffies;
    proc_create(PROC_NAME, 0666, NULL, &proc_ops);
    return 0;
}

void proc_exit(void)
{
    remove_proc_entry(PROC_NAME, NULL);
}

ssize_t proc_read(struct file *file, char __user *usr_buf, size_t count, loff_t *pos)
{
    int rv = 0;
    char buffer[BUFFER_SIZE];
    static int completed = 0;

    if (completed)
    {
        completed = 0;
        return 0;
    }

    completed = 1;
    // jf = jiffies;
    // rv = sprintf(buffer, "(Jiffies Log): Welcome To Jiffies Module\n");
    rv = sprintf(buffer, "----------------------\n[Jiffies Log]: Welcome To Jiffies Module\nJiffies Number:%lu\n----------------------\n", jf);
    copy_to_user(usr_buf, buffer, rv);

    return rv;
}


module_init(proc_init);
module_exit(proc_exit);

MODULE_LICENSE("MIT");
MODULE_DESCRIPTION("(jiffies Module)");
MODULE_AUTHOR("HOSAM Elnabawy");



