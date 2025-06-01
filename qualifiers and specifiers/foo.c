#include <stdio.h>

extern int a;

int main(void) {
    printf("%d\n", a);
    a = 99;
    printf("%d\n", a);
}
// compile - gcc foo.c bar.c -o foo