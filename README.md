System Calls
-------------------
### Description

This part of the assignment implements a system call `my_xtime` which returns the current system time by means of call-by-reference argument. The system call verifies the user memory space variable and checks it's validity and if it's writable. If not, it returns EFAULT. If the memory space check is successful, it copies the kernel time into that memory. It also prints the time to the kernel console using `printk()`.
A userspace program is also available which calls this system call and gets and prints the current system time.

### Running the program

To compile the userspace program, run the command `make` and to recompile or clean, run `make clean`. ANd run the program using `./myxtime_impl`.
