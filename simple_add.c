#include <linux/kernel.h>
#include <linux/linkage.h>

asmlinkage long sys_simple_add(int a, int b, int* c) {
	printk(KERN_ALERT "Value for a is %d\n", a);
	printk(KERN_ALERT "Value for b is %d\n", b);
	*c = a + b;
	printk(KERN_ALERT "Result of a+b is %d\n",*c);
	return 0;
}

