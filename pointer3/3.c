// Type punning with unsigned char * 

#include <stdio.h>
#include <stddef.h>

void *my_memcpy(void *dest, const void *src, size_t n) {
    const unsigned char *s = src;
    unsigned char *d = dest;

    while (n-- > 0) {
        *d++ = *s++;
    }

    return dest;
}

int main(void) {
    int a = 0x12345678;
    int b;

    my_memcpy(&b, &a, sizeof(a));

    printf("b: 0x%X\n", b);
}
