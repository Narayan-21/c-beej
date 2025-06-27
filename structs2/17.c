// passing and returning structs 

#include <stdio.h>

struct foo {
    int x, y;
};

struct foo f(void) {
    return (struct foo){.x = 22, .y=30};
};

int main(void) {
    struct foo a = f();
    printf("%d %d\n", a.x, a.y);
};
