// const and pointer 

#include <stdio.h>

void main(void) {
    int x[] = {10,20};
    const int *p = x;
    p++; // Can modify p but can;t change what it points to
    printf("%p", p);
    // *p = 30; -> Cannot do this -> this will throw an error

    // const int *p <=> int const *p (both are same)
};