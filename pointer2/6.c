#include <stdio.h>

void *my_memcpy(void *dest, void *src, int byte_count) {
    char *s = src, *d = dest;
    while (byte_count --) {
        *d++ = *s++;
    };
    return dest;
}

void *my_memcpy_safer(void *dest, void *src, int byte_count) {
    if (!dest || !src) return NULL;
    char *d = (char *)dest;
    const char *s = (const char *)src;

    while (byte_count -- ){
        *d++ = *s++;
    }
    return dest;
};

