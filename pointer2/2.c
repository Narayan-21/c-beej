// Array/pointer equivalence 
// a[b] == *(a + b)

#include <stdio.h>

int main(void)
{
    int a[] = {11, 22, 33, 44, 55};

    int *p = a;  // p points to the first element of a, 11

    // Print all elements of the array a variety of ways:

    for (int i = 0; i < 5; i++)
        printf("%d\n", a[i]);      // Array notation with a
    printf("--------\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", p[i]);      // Array notation with p
    printf("--------\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(a + i));  // Pointer notation with a
    printf("--------\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p + i));  // Pointer notation with p
    printf("--------\n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p++));    // Moving pointer p
    printf("............\n");
    // for (int i=0; i<5; i++){
    //     printf("%d\n", *(a++));    // Moving array variable a--ERROR!
    // };

    printf("--------\n");
}