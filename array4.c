// Arrays with Pointers

#include <stdio.h>

void times2(int *a, int len){
    for (int i=0; i<len; i++){
        printf("%d\n", a[i]*2);
    }
}


void times3(int a[], int len){
    for (int i=0; i<len; i++){
        printf("%d\n", a[i]*3);
    }
}


void times4(int a[5], int len){
    for (int i=0; i<len; i++){
        printf("%d\n", a[i]*4);
    }
}

void double_array(int *a, int len){
    // passing array to a function => passing a pointer to the first element in the array
    // But if the function has the pointer to the data then it can manipulate the data.
    for (int i=0; i<len; i++){
        a[i] *= 2;
    }
}

void print_2d_array(int a[2][3]){
    for (int row=0; row<2; row++){
        for (int col=0; col<3; col++){
            printf("row, col - %d\n", a[row][col]);
        printf("\n");
        }
    }
}

int main(void){
    int a[5] = {2,3,4,6,7};
    int *p;
    p = &a[0];
    printf("%d\n", *p);  
    int x[5] = {11,22,33,44,55};
    times2(x,5);
    times3(x,5);
    times4(x,5);
    double_array(x, 5);
    for (int j=0; j<5; j++){
        printf("doubled val of x - %d\n", x[j]);
    }

    int y[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    print_2d_array(y);

    return 0;
}