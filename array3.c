#include <stdio.h>

#define COUNT 5 // Preprocessor Macro

int main(void){
    int a[COUNT] = {[COUNT - 2]=1, 2}; // COUNT is replaced with 5 at compile time.
    for (int i = 0; i < COUNT; i++) {
        printf("%d \n", a[i]);  // Print array elements
    }

    int row, col;
    int b[2][5] = {
        {0,1,2,3,4},
        {5,6,7,8,9}
    };
    for (row = 0; row < 2; row++) {
        for (col = 0; col < 5; col++) {
            printf("(%d,%d) = %d\n", row, col, b[row][col]);
        }
    }
    int c[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
    return 0;
}