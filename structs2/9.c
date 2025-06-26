// Bit fields 

#include <stdio.h>

struct foo {
    unsigned int a:5; // max number of bits the value can take
    unsigned int b:5;
    unsigned int c:3;
    unsigned int d:3;
};

