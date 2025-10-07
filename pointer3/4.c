#include <stdio.h>

struct foo {
    char a;
    int b;
};

int main(void) {
    struct foo x = {0x12, 0x12345678};
    unsigned char *p = (unsigned char *)&x;

    printf("Object representation bytes of struct foo:\n");
    for (size_t i = 0; i < sizeof(x); i++) {
        printf("%02X ", p[i]);
    }
    printf("\n");
}
