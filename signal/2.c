// Signal Handler
// signal() takes two arguments - 
// - an integer 'sig' representing the signal, and 
// a pointer func to the handler (the handler returns void and takes an int as an argument)

// signal() will return whatever you passed as func on success... so that means it’s returning a pointer to a function that returns void and takes an int as an argument.

// example where we'll need to hit CTRL + C twice to exit

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int count = 0;

void sigint_handler(int signum) {
    signal(SIGINT, sigint_handler); // Resetting the handler - 
    // This is because C has the option of resetting the signal handler to its SIG_DFL behavior before running the custom handler.
    (void)signum;

    count++;
    printf("Count: %d\n", count);
    if (count == 2){
        printf("Exiting!\n");
        exit(0);
    }
}

int main(void) {
    signal(SIGINT, sigint_handler);
    printf("Try hitting ^C...\n");
    for(;;);
}
