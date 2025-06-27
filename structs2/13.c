// If we have a pointer to a union, we can cast that pointer to any of the types of the fields in that union and get the value out that way.

#include <stdio.h>

union foo {
    int a,b,c,d,e;
    float f,g,h;
    char i,j;
};


void main(void){
    union foo x;
    float *foo_float_p = (float *)&x;
    int *foo_int_p = (int *)&x;
    
    x.a = 12;
    printf("%d\n", x.a);
    printf("%d\n", *foo_int_p);

    x.g = 3.14159;
    printf("%f\n", x.g);
    printf("%f\n", *foo_float_p);
    printf("%d\n", x.a); // Now it will show random behaviour
    printf("%d\n", *foo_int_p); // Now it will show random behaviour

    // Reverse is also true.  If we have a pointer to a type inside the union, we can cast that to a pointer to the union and access its members.
    union foo y;
    int *foo_int_p_y = (int *)&y;
    union foo *p =  (union foo *)foo_int_p_y;
    p->a = 12;
    y.a = 12;
    // both lines above are same.
};