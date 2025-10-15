// Bailing out - out from the super nested code

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int error = 0;

    printf("Starting nested loops...\n");

    for (int i = 0; i < 3; i++) {
        printf("Outer loop i=%d\n", i);
        for (int j = 0; j < 3; j++) {
            printf("Middle loop j=%d\n", j);
            for (int k = 0; k < 3; k++) {
                printf("Inner loop k=%d\n", k);

                // error simulation
                if (i == 1 && j == 2 && k == 0) {
                    printf("Error detected at i=%d, j=%d, k=%d\n", i, j, k);
                    error = 1;
                    goto bail;
                }
                printf("Doing work...\n");
            }
        }
    }

bail:
    if (error) {
        printf("Cleaning up after error...\n");
    } else {
        printf("Normal cleanup.\n");
    }

    printf("Program exiting.\n");
    return 0;
}
