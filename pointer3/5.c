// uintptr_t / intptr_t - unsigned/signed integer type - guaranteed to be large enough to hold a pointer value.
#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>

int main(void) {
    int x = 42;
    int *ptr = &x;

    // Convert pointer to integer
    uintptr_t iptr = (uintptr_t)ptr;
    printf("Converted Value: %" PRIuPTR "\n", iptr);

    // Convert back to pointer
    int *ptr2 = (int *)iptr;

    printf("%p %p\n", (void*)ptr, (void*)ptr2);
}
