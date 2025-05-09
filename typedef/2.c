#include <stdio.h>

struct animal {
    char *name;
    int leg_count, speed;
};

void main(void){
    typedef struct animal animal;
    struct animal y; // this works
    animal z; // this also works

    // or 
    typedef struct animal2 {
        char *name;
        int leg_count, speed;
    } animal2;

    struct animal2 y2;
    animal2 z;

    // defining anonymous structs ->

    typedef struct {
        char *name;
        int leg_count, speed;
    } birds;

    birds x;

    typedef struct {
        int x, y;
    } point;
    point p = {.x = 20, .y= 30};
    printf("%d, %d\n", p.x, p.y);

    // best use case of typedef - if we are referring some type multiple times in a project and then we need to change that type. Hence a change at one place only will suffice,
    typedef float app_float;
    app_float f1, f2, f3, f4;

    typedef long double app_float2;
    app_float2 f11, f12, f123;

    // typedef and pointer

    typedef int *intptr;
    int p = 10;
    intptr ptr = &p;

    // typedef and array

    typedef int fiveints[5];
    fiveints x = {2,3,4,5,6};
};