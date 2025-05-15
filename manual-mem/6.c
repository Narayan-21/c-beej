// aligned realloc manual implementation - 
// Since realloc() does not have alignment guarantee, if we want the aligned reallocated space - 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *aligned_realloc(void *ptr, size_t old_size, size_t alignment, size_t size) {
    char *new_ptr = aligned_alloc(alignment, size);
    if (new_ptr == NULL) {
        return NULL;
    }

    size_t copy_size = old_size < size ? old_size : size;
    if (ptr != NULL) {
        memcpy(new_ptr, ptr, copy_size);
    };
    free(ptr);
    return new_ptr;
};

int main(){ 
    size_t alignment = 64;
    size_t initial_size = 16;
    size_t new_size = 32;

    void *ptr = aligned_alloc(alignment, initial_size);
    if (ptr == NULL) {
        perror("Initial aligned_alloc failed");
        return 1;
    }

    memset(ptr, 42, initial_size);

    void *new_ptr = aligned_realloc(ptr, initial_size, alignment, new_size);
    if (new_ptr == NULL) {
        perror("aligned_realloc failed");
        free(ptr);
        return 1;
    }
    char *data = (char *)new_ptr;
    for (int i = 0; i < initial_size; ++i) {
        printf("%d ", data[i]);  // should print 42s
    }
    free(new_ptr);
    return 0;
}