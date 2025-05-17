// Compiler implicit conversions -
// if `int` is used to represent the value from char or short -> that value is promoted to int.
// if that does not fit it in int then it will be promoted to unsigned int.
// Usual arithmetic conversions

#include <stdio.h>

int main() {
    char x = 10, y=20;
    int i = x + y;
    printf("final added value: %d \n", i);

    int z = 1 + 1.5; // converted during arithmetic itself.
    printf("Final added value Z is %d \n", z);
    return 0;
}