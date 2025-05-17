// use of casting to avoid warning to print the pointer values
#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int x = 3423;
    int *p = &x;
    printf("%p\n", (void *)p);
    printf("%d\n",*p);
}