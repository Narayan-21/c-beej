// Losing a macro - #undef

#include <stdio.h>

int main(void) {
    #define GOAT
    #ifdef GOAT
    printf("Goat detected! \n");
    #endif

    #undef GOAT
    #ifdef GOAT
    printf("Goat detected again! \n");
    #else
    printf("Goat removed!\n");
    #endif
}

