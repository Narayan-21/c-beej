#include <stdio.h>
// string initialization

void main(void){
    // 1. string literal -
    
    // -> compiler stores this to - read-only section of memory
    // 's' points to that memory - read only hence can't be modified.
    char *s = "hello world";
    // 2. array init
    // - creates a new array in the program;s stack memory
    // content is copied in the s variable.
    char s2[] = "hello world 2";
    s2[0] = 'H';
    printf("String literal pointer %s\n", s);
    printf("Character array %s\n", s2);
    // return 0;
}

