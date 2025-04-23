#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t p;
    p = fork();

    if (p == 0)
    {
        sleep(5);
        printf("I am child having PID : %d\n", getpid());
        printf("My parent pid is : %d\n", getppid());
    }
    else
    {
        printf("I am parent having pid : %d\n", getpid());
        printf("My child pid is : %d\n", p);
    }
}
