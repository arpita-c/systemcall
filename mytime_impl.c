#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/time.h>
#include <sys/syscall.h>
#include <sys/unistd.h>

#define __NR_sys_my_xtime 326

int main(void)
{
    struct timespec mytime;
    int ret_val = syscall(__NR_sys_my_xtime, &mytime);
    if(ret_val != 0) perror("my_xtime");
    printf("The current time is %ld\n", mytime.tv_nsec);
    return 0;
}
