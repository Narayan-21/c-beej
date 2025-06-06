// Stringification
// Turn argument passed to a macro to string - by preceeding it with # 

#include <stdio.h>

#define PRINT_INT_VAL(x) printf("%s = %d \n", #x, x)

int main(void) {
    int a = 5;
    PRINT_INT_VAL(a);
};
