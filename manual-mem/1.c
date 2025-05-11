#include <stdio.h>
#include <stdlib.h>

void main() {
    int *p = malloc(sizeof(int)); // mem allocation
    *p = 12; //store something here
    printf("%d\n", *p);
    free(p); // all done with that mem

    int *x;
    x = malloc(sizeof(int)*10); // If unable to allocate then => returns NULL
    if (x == NULL){
        printf("Error allocating 10 ints\n");
    };

    int *y;
    if ((y = malloc(sizeof(int)*10)) == NULL) {
        printf("Error allocating 10 ints \n");
    };
};