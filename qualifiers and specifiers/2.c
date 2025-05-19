#include <stdio.h>
#include <stdlib.h>

void main(void) {
    char value = 'A';
    char *ptr = &value;
    char **p = &ptr;
    p++; // OK!
    p = &ptr;
    (*p)++; // OK!

    char **const q;
    // q++; // error
    (*q)++; // OK!

    char *const *r;
    r++; // OK!
    // (*r)++; // error

    char *const *const s;
    // s++; // error
    // (*s)++; // error
};