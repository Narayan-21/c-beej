// Tail-call optimization - is a way to not waste stack space when calling other functions under specific circumstances.

#include <stdio.h>

int factorial(int n, int a) {
tco:
    if (n == 0)
        return a;

    int next_n = n-1;
    int next_a = a*n;

    n = next_n;
    a = next_a;

    goto tco;
}

int main(void) {
    for (int i=0; i<8; i++) {
        printf("%d == %d\n", i, factorial(i, 1));
    };
}