#include <stdlib.h>
#include <stdio.h>

int plus_one(int); // Function prototype (definition of function but it will be defined later);
void foo(void); // Putting void in case of empty parameters passed to the function

int main(void) {
    int goal_count = 0;
    switch (goal_count) {
        case 0:
            printf("You have no goals \n");
        case 1: 
            printf("You have one single goal \n");
            break;
        case 2:
            printf("You have 2 Goals \n");
            break;
        default:
            printf("you have plenty goals \n");
            break;
    }

    int i = 10, j;
    j = plus_one(i);
    printf("i+1 is %d \n", j);
    unsigned int num = 0x1;
    char *ptr = (char*)&num;

    if (*ptr == 1){
        printf("System is lil-endian \n");
    } else {
        printf("System is Big-endian \n");
    }
    printf("the address of i is %p\n", (void *)&i);
    return 0;
};

int plus_one(int n) {
    return n+1;
}