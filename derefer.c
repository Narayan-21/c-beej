#include <stdio.h>

int main(void) {
    int i;
    int *p;
    p = &i;
    i = 10;
    printf("pointer is pointing to %d\n", *p);
    *p = 20;
    printf("i is %d\n", i);
    printf("i is %d\n", *p);
    return 0;
}
