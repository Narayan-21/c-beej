#include <stdio.h>

int main(void){
    int i;
    int a[5] = {22, 24, 12, 11, 14}; // Array Initialization - if less items then rest are filled with zeros
    for (i=0; i<5; i++){
        printf("%d\n", a[i]);
    }
    int b[4] = {1,2};
    for (int j=0; j<4; j++){
        printf("%d\n", b[j]);
    }
}