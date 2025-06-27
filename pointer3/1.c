// Simple pointer to a pointer
// & -> create a pointer 
// * -> reverse it (dereferencing)

#include <stdio.h>

int main(void) {
    int x = 3490;

    int *p = &x;
    int **q = &p;

    printf("%d %d \n", *p, **q);
};
