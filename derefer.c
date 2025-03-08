#include <stdio.h>

void increment(int a) {
    a++;
}

void increment2(int *p) {
    *p = *p + 1;
}

int main(void) {
    int i;
    int *p;
    p = &i;
    i = 10;
    printf("pointer is pointing to %d\n", *p);
    *p = 20;
    printf("i is %d\n", i);
    printf("i is %d\n", *p);
    increment(i);
    printf("i == %d\n", i);

    int *j = &i;  // note the address-of; turns it into a pointer to i

    printf("i is %d\n", i);        // prints "10"
    printf("i is also %d\n", *j);  // prints "10"

    increment2(j);                  // j is an int*--to i

    printf("i is %d\n", i);        // prints "11"!
    int *q;
    q = NULL; // NUll pointer introduction
    *q = 12;
    printf("q's val is %d\n", q);
    return 0;
}