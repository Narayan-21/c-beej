// Bit fields 

#include <stdio.h>

struct foo {
    unsigned int a:5; // max number of bits the value can take
    unsigned int b:5;
    unsigned int c:3;
    unsigned int d:3;
};

// Non-adjacent bits hence 4*4 = 16 bytes
struct foo2 {
    unsigned int a:1;
    unsigned int b;
    unsigned int c:1;
    unsigned int d;
};

// a&c are now adjacent hence go into the same int. 
struct bar {
    unsigned int a:1;
    unsigned int c:1;
    unsigned int b;
    unsigned int d;
};

// unnamed bit-field => If we do not need some memory in between two different bits
struct bar2 {
    unsigned char a:2;
    unsigned char :5; //<-- unnamed bit-field
    unsigned char   b:1; 
};