// Passing pointer as an argument
#include <stdio.h>

void increment(int *p){
    *p = *p + 1;
}

int main(void) {
    int i = 10;
    int *j = &i;
    printf("i is %d \n", i);
    printf("i is also %d \n", *j);

    increment(j); // j refer to the address of i and increment gets the copy of the pointer hence now both of them are pointing at the same address.
    printf("i is %d \n", i);
}
