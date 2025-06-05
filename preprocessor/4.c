#include <stdio.h>

#define MODE1

// Won't compile since it'll only work in C23 (elifdef) and not in C17 and lesser versions.

int main(void) {
    #ifdef MODE1
        printf("mode 1")
    #elifdef MODE2
        printf("mode 2")
    #elifdef MODE3
        printf("mode 3")
    #else
        printf("mode 4")
    #endif
}