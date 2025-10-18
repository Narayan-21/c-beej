// Multiple threads examples
// Problem in this code - Race condition: The main thread is modifying i before the thread has a chance to copy it. 
// Indeed, i makes it all the way to 5 and ends the loop before the last thread gets a chance to copy it.
// Soln- we do malloc() space for an int and copy the value i in it.
// Hence each new thread gets its own freshly-malloc()d variable and we pass a pointer to that to the run() function. (3.c)

#include <stdio.h>
#include <threads.h>

#define THREAD_COUNT 5

int run (void *arg) {
    int i = *(int*)arg;
    printf("THREAD %d: running\n", i);
    return i;
}

int main(void) {
    thrd_t t[THREAD_COUNT];
    int i;

    printf("Launching threads....\n");
    for (int i=0; i<THREAD_COUNT; i++) {
        thrd_create(t+i, run, &i);
    };

    printf("Doing other things while the thread runs....\n");
    printf("Waiting for thread to complete....\n");
    for (int i=0; i<THREAD_COUNT; i++) {
        int res;
        thrd_join(t[i], &res);
        printf("Thread %d complete! \n", res);
    }
    printf("All threads complete!\n");
}