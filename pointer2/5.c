// drawbacks of void pointer -->
// 1. you cannot do pointer arithmetic on a void*.
// 2. you cannot dereference a void*.
// 3. you cannot use a arrow operator on a void*, since it is also a dereference.
// 4. you cannot use array notation on a void*, since it;s also a dereference as well.

#include <stdio.h>

struct antilope {
    int age;
    double weight;
};

void void_pointer_ex() {
    int arr[] = {10, 20, 30, 40};
    struct antilope a = {5, 42.0};

    void *ptr;

    // 1. pointer arithmetic on void *
    ptr = arr;
    // ptr = ptr + 1;
    
    // hence cast before arithmetic
    int *int_ptr = (int *)ptr;
    printf("Pointer arithmetic (legal): %d\n", *(int_ptr + 2));

    // 2. Dereferencing on void *
    ptr = &arr[0];
    // int value = *ptr; // Error

    // cast before dereferencing 
    int value = *(int *)ptr;
    printf("Dereferencing (legal): %d\n", value); 

    // 3. arrow operator on void
    ptr = &a;
    // int age = ptr -> age;

    int age = ((struct antilope *)ptr) -> age;
    printf("Arrow operator (legal): %d\n", age);

    // 4. Using array notation on void*

    ptr = arr; 
    // int val = ptr[2];

    // cast to the type
    int val = ((int *)ptr)[2];
    printf("Array indexing (legal): %d\n", val);
}

int main() {
    void_pointer_ex();
    return 0;
}