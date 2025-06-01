// auto - Indicated that this object has automatic storage duration
// auto is default for block scopre variables - it exists in the scope it is defined and is automatically deallocated when the scope is exited.
#include <stdio.h>

void example() {
    auto int x = 10;
    // auto is optional here; it's the default for local variables
    printf("Value of x: %d \n", x);
};

int main() {
    example();
    return 0;
}