#include <stdio.h>

int main(void){
    int i;
    int a[5] = {22, 24, 12, 11, 14}; // Array Initialization - if less items then rest are filled with zeros
    for (i=0; i<5; i++){
        printf("%d\n", a[i]);
    }
    int b[5] = {1,2};
    for (int j=0; j<5; j++){
        printf("%d\n", b[j]);
    }
    int c[10] = {0, 10, 11, [5]=55, 66, 77};
    for (int k=0; k<10; k++){
        printf("c array %d\n", c[k]);
    }
}