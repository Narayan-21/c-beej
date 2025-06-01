// Volatile Example 2
// Volatile - tells the complier that a value might change behind its back and should be looked up every time.

// Here we simulate this with a global variable that continuously updates in a background thread (to mimic hardware behavior), and then see how volatile prevents the compiler from optimizing reads.

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>

volatile int timer_register = 0;

void* update_timer(void* arg) {
    while (1) {
        ++timer_register;
        usleep(100000);
    }
    return NULL;
}

int main() {
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, update_timer, NULL);
    printf("Reading hardware timer (CTRL + c to stop) .... \n");
    while (1) {
        int current_time = timer_register;
        printf("Timer = %d \n", current_time);
        usleep(300000);
    }

    return 0;
}