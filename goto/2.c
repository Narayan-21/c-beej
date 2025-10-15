// Example usage : Skipping multiple nesting levels in one go.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                printf("%d, %d, %d \n", i, j, k);
                goto continue_i;
            }
        }
    continue_i: ;
    }
    return 0;
}