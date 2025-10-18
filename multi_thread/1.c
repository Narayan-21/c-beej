// thrd_create() takes a pointer to the function to run, and it’s of type thrd_start_t, which is int (*)(void *)
// arg passed to the function has to have a lifetime long enough so that the thread can pick it up before it goes away. 
// Also, it needs to not be overwritten by the main thread before the new thread can use it.

#include <stdio.h>
#include <threads.h>

int run(void *arg) {
    int *a = arg;
    printf("THREAD: running with arg %d\n", *a);
    return 12;
};

int main(void) {
    thrd_t t;
    int arg = 3333;
    printf("Launching a thread\n");

    thrd_create(&t, run, &arg);
    printf("Doing other things while the thread runs\n");
    printf("Waiting for thread to complete...\n");
    int res;
    thrd_join(t, &res);
    printf("Thread exited with return value %d\n", res);
}