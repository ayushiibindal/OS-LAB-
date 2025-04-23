// Write program to create threads in Linux

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *thread_function(void *arg);  // thread function declaration

int i, j;  // global variable declaration

int main()
{
    pthread_t a_thread;  // thread declaration

    pthread_create(&a_thread, NULL, thread_function, NULL);
    pthread_join(a_thread, NULL);  // process waits for thread to finish

    printf("Inside main program\n");
    for(j = 20; j < 25; j++)
    {
        printf("j : %d\n", j);
        sleep(1);
    }
}

// Definition of thread_function after main
void *thread_function(void *arg)
{
    printf("inside thread\n");
    for(i = 0; i < 5; i++)
    {
        printf("i : %d\n", i);
        sleep(1);
    }
}
