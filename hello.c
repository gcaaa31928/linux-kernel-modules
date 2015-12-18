#include <linux/kernel.h> /* pr_info 所需 include 檔案*/
#include <linux/init.h>
#include <linux/module.h> /* 所有 module 需要檔案*/
#include <linux/version.h>

MODULE_AUTHOR("samuel.thibault@ens-lyon.org");
MODULE_DESCRIPTION("braille device");
MODULE_LICENSE("GPL");

static int hello_init(void)
{
	printk(KERN_INFO "Hello kernel\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_INFO "Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);
