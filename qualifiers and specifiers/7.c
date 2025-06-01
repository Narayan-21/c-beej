// Static 
// 1. Block scope - Here i say that I want a single instance of this variable to exist, shared between calls.
// => It's Value will persist between calls.
// Static in block scopr with an initializer will only be initiliazerd one time on program startup, not each time the function is called.
// static block scope variables are initialized to 0 be default.
// static int foo; default starting value => 0;


#include <stdio.h>

void counter(void){
    static int count = 1;
    printf("This has been called %d times \n", count);
    count ++;
};

int main(void) {
    counter();
    counter();
    counter();
    counter();
};