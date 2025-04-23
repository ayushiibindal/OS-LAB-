// zombie.c
#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t p;
    p = fork();

    if (p == 0)
    {
        printf("Child having id : %d\n", getpid());
    }
    else
    {
        printf("Parent having id : %d\n", getpid());
        sleep(15); // run the ps command during this time.
    }
}
