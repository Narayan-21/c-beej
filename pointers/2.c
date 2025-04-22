#include <stdio.h>

int main(void) {
    int x = 42;        // 1) declare an int variable 'x' and set it to 42
    int *p = &x;       // 2) declare a pointer 'p' that holds the address of 'x'
                       //    '&x' means “the address of x”

    // You can print the address and the value:
    printf("Address of x: %p\n", (void*)p);
    printf("Value of x via direct access: %d\n", x);
    printf("Value of x via pointer dereference: %d\n", *p);
    //    '*' means “go to the address in p, and give me the int stored there”

    // Modify x through the pointer:
    *p = 100;          // 3) write 100 into the location p points to (i.e. x)
    printf("New value of x via direct access: %d\n", x);

    return 0;
}
