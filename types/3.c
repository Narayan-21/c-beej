// Generic selection

#include <stdio.h>

int main(void) {
    int i;
    float f;
    char c;

    char *s = _Generic(i,
    int: "that var is an int",
    float: "that var is a float",
    default: "that var is some type"
    );

    printf("%s\n", s);
};