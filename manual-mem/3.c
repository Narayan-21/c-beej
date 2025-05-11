// calloc and realloc

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int *p = calloc(10, sizeof(int));
    int *q = malloc(10 * sizeof(int));
    memset(q, 0, 10*sizeof(int));

    float *r = malloc(sizeof *r * 20);
    for (int i = 0; i < 20; i++) {
        r[i] = i / 20.0;
    };

    float *new_r = realloc(r, sizeof *r*40);
    if (new_r == NULL ) {
        printf("Error reallocating \n");
        return 1; 
    }

    r = new_r;
    for (int i = 20; i < 40; i++)
        r[i] = 1.0 + (i - 20) / 20.0;

    for (int i = 0; i < 40; i++)
        printf("%f\n", r[i]);

    free(r); // free the memory
};