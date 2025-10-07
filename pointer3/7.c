// Pointer to functions
#include <stdio.h>

void print_int(int n) {
    printf("%d \n", n);
};


int main(void) {
    void (*p)(int) = print_int;
    p(3444);
    return 0;
}
