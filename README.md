#Kernel System Call Assigment
Brandon Mikulka
brandon.mikulka@colorado.edu

A simple system call that adds 2 numbers together then returns the result to a variable in the userspace.

### Kernel Files that were changed
Adds a system call that adds 2 numbers together and stores them in an int variable that resides in the userspace.
Place the following kernel files in the appropriate paths listed below: 
```
arch/x86/kernel/simple_add.c
arch/x86/kernel/Makefile
arch/x86/syscalls/syscall_64.tbl
includes/linux/syscalls.h
```
### Quick test program for system call (319 in this case)
Takes the numbers 4 and 5 and sends them to the simple add syscall which should result in 9
```
syscall.c
```
(compile and run with `gcc syscall.c -o syscall; ./syscall`)

### System Log file
```
/var/log/syslog
```
(this file can be tailed using `tail -f /var/log/syslog`)

