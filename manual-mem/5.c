// aligned allocation
// memory alignment - requirement that data be stored at memory addresses that are multiple of some values.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *aligned_alloc_manual(void *ptr, size_t old_size, size_t alignment, size_t size) {
    char *new_ptr = aligned_alloc(alignment, size);
    if (new_ptr == NULL) {
        return NULL;
    };

    size_t copy_size = old_size < size ? old_size : size;

    if (ptr != NULL) {
        memcpy(new_ptr, ptr, copy_size);
    };

    free(ptr);
    return new_ptr;
};

int main(void) {
    // allocated 256 bytes aligned on a 64 bytes boundry
    char *p = aligned_alloc(64, 256);
    strcpy(p, "Hello world\n");
    printf("%s\n", p);
    free(p);
}

