#include <stdio.h> // System header file
#include "myheader.h" // local header file

// Simple Macros
#define PI 3.141
#define HELLO "Hello world"
#define NO_VALUE
// Macros with define are helpful when - 
// - switch cases
// - fixed array lengths

int main(void) {
    printf("%s, %f \n", HELLO, PI);
}