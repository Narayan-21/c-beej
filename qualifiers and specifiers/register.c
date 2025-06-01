// register  - to tell the compiler that a particular variable is frequently-used and should be made as fast as possible to access.

#include <stdio.h>

int main(void) {
    register int a;
    for (a = 0; a<10; a++) {
        printf("%d\n", a);
    };
}

// we can't take the address of a register
// register int a;
// int *p = &a;  => Compiler error

// register int a[] = {11, 22, 33, 44, 55};
// int *p = a;  // COMPILER ERROR! Can't take address of a[0]

// register int a[] = {11, 22, 33, 44, 55};
// int a = *(a + 2);  // COMPILER ERROR! Address of a[0] taken


// Since in CPU -> registers are for instant access and those variables are not in the RAM hence have no memory address.