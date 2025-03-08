#include <stdio.h>

int foo(int x[12]);

int main(void){
    int i;
    float f[4]; // Declaring an array of 4 floats
    f[0] = 3.141;
    f[1] = 1.141;
    f[2] = 2.141;
    f[3] = 4.141;
    for (i=0; i<4; i++){
        printf("%f\n", f[i]);
    }
    int arr[12] = {0};
    foo(arr);

    printf("Size of the array is %zu\n", sizeof f / sizeof(f[0]));
    return 0;
}

int foo(int x[12]) { // While passing an array to the function, you're only passing a pointer to the first element
    printf("Size of x inside foo: %zu bytes\n", sizeof x); // sizeof pointer
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Elements in x (incorrect due to pointer decay): %zu\n", sizeof x / sizeof(int));  
    return 0;
}