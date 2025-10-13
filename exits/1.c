// when we call exit() - all the functions registered with atexit() are called, in reverse order of registration
// All open output streams (stdout, files etc.) are flushed and closed.
// Temporary files are cleaned up & the program terminates cleanly.

#include <stdio.h>
#include <stdlib.h>

void on_exit_1(void) {
    printf("Exit handler 1 called!\n");
};

void on_exit_2(void) {
    printf("Exit handler 2 called \n");
};

int main(void) {
    atexit(on_exit_1);
    atexit(on_exit_2);
    printf("About to exit....\n");
};