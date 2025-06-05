#include <stdio.h>

#define EXTRA_HAPPY
#define NOT_HAPPY

int main(void) {
    #ifdef EXTRA_HAPPY
    printf("I'm extra happy \n");
    #endif

    #ifndef EXTRA_HAPPY
        printf("I'm just regular");
    #elifdef NOT_HAPPY // Came only in C23 not in C17 => 
    // FOR C17 -> check 4.c file
        printf("NOT happy");
    #else
        printf("I don't know what's going on \n");
    #endif
};