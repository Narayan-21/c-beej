#include <stdio.h>

int main(void) {
    int a, *p; // declaring pointer and int in a same line, a - int, p - pointer
    int *r, s; // r- pointer, s - int
    int* b, c; // b - pointer to int, c - int
    // sizeof operates on the type of the expression
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof p);
    printf("%zu\n", sizeof *p);
    return 0;
}