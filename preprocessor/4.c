#include <stdio.h>

#define MODE1

// Won't compile with elifdef since it'll only work in C23 (elifdef) and not in C17 and lesser versions.
// Hence must be used with another alternative => elif defined MODE

int main(void) {
    #ifdef MODE1
        printf("mode 1 \n");
    // #elifdef MODE2
    //     printf("mode 2")
    // #elifdef MODE3
    //     printf("mode 3")
    #elif defined MODE2
        printf("mode 2 \n");

    #elif defined MODE3
        printf("mode 3 \n");
    #else
        printf("mode 4 \n");
    #endif
};