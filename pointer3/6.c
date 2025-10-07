// Pointer differences - storing the pointer differences in ptrdiff_t 
#include <stdio.h>
#include <stddef.h>

int main() {
    int cats[100];

    int *f = cats + 20;
    int *g = cats + 60;
    
    ptrdiff_t d = g - f;
    printf("%td\n", d); 
    printf("%tX\n", d); 
    return 0;
}