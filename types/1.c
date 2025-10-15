// Passing unnamed objects to functions

#include <stdio.h>

int sum(int p[], int count){
    int total = 0;
    for (int i=0; i<count; i++) {
        total += p[i];
    };
    return total;
}

int main(void) {
    int s = sum((int []){1,3,4,9}, 4);
    printf("Sum is %d\n", s);
};