// goto - jumps in the function scope
// longjmp() - allows you to jump back to an earlier point in execution, back to a function that called this one.

// set the bookmark with setjmp() then call longjmp() to jump back to the execution point where we set the bookmark

#include <stdio.h>
#include <setjmp.h>

jmp_buf env;

void depth2(void){
    printf("Entering depth 2\n");
    longjmp(env, 3490);
    printf("Leaving depth 2\n");
};

void depth1(void){
    printf("Entering depth 1\n");
    depth2();
    printf("Leaving depth 1\n");
};

int main(void) {
    switch (setjmp(env))
    {
    case 0:
        printf("Calling into functions, setjmp() returned 0\n");
        depth1();
        printf("Returned from functions\n");
        break;
    
    case 3490:
        printf("Bailed back to main, setjmp() returned 3490\n");
        break;
    }
}