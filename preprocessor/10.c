// concatenation
// with ##

#include <stdio.h>

#define CAT(a, b) a ## b

int main(void){
    printf("%f \n", CAT(3.14, 1592));
}