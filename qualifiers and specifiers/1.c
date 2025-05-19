// const and pointer 

#include <stdio.h>

void main(void) {
    int x[] = {10,20};
    const int *p = x;
    p++; // Can modify p but can;t change what it points to
    printf("%p", p);
    // *p = 30; -> Cannot do this -> this will throw an error

    // const int *p <=> int const *p (both are same)

    // Changing what pointer points to but not the pointer itself.
    int y = 30;
    int *const p2 = &y;
    *p2 = 20; // Now, this will be set to 20;
    // p2++; // this will give the compile error.

    // We can also make both the things work - 
    const int *const p3;
};