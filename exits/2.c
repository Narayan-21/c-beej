// quick_exit() : open files might not be flushed. temp files might not be removed. atexit() handlers won't be called

// Other exists :-
// _Exit() : exits immediately, period. 
// assert() : this is used to insist something to be true, or else the program will exit.
// abort() : works by raising a SIGABRT signal

#include <stdio.h>
#include <stdlib.h>

void on_quick_exit_1(void) {
    printf("Quick exit handler 1 called!\n");
};

void on_quick_exit_2(void) {
    printf("Quick exit handler 2 called!\n");
};

void on_exit_1(void) {
    printf("Normal exit -- This won't be called");
};

int main(void) {
    at_quick_exit(on_quick_exit_1);
    at_quick_exit(on_quick_exit_2);

    atexit(on_exit_1); // This won't be called

    printf("About to quick exit....\n");

    quick_exit(0);
}