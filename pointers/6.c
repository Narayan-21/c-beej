// Passing multi-dim array to the function

#include <stdio.h>

void print_2d_array(int a[2][3]){
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++)
            printf("%d ", a[row][col]);
        printf("\n");
    }
}

int main(void){
    int x[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    print_2d_array(x);
}

//C needs to know all the dimensions (except the first one) so it has enough information to know where in memory to look to find a value.