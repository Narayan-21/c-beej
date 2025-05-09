// Pointers - Arithmetic
#include <stdio.h>

int my_strlen(char *s){
    char *p = s;
    while (*p != '\0'){
        p++;
    };
    return p - s;
}

void main(void){
    int a[5] = {1,2,3,4,5};
    int *p = &a[0]; // int *p = a; will also work
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+5)); // nothing at that memory - undefined behaviour

    for (int i =0; i< 5; i++){
        printf("%d\n", *(p+i));
    };

    int b[6] = {11,22,33,44,55,99};
    int *p2 = b;
    while (*p2 != 99)
    {
        printf("%d\n", *p2);
        p2++;
    };
    printf("%d\n", my_strlen("Hello world!"));
}
