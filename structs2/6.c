// struct padding example

#include <stdio.h>

struct foo {
    int a;
    char b;
    int c;
    char d;
};

int main(void) {
    printf("%zu\n", sizeof(int) + sizeof(char) + sizeof(int) + sizeof(char)); // 4+1+4+1
    printf("%zu\n", sizeof(struct foo)); // 4+1+3(padding)+4+1+3(padding)
};