// Variadic example

#include <stdio.h>
#include <stdarg.h>

int my_print(int serial, const char *format, ...) {
    va_list va;
    int rv;

    printf("The serial number is: %d\n", serial);

    va_start(va, format);
    rv = vprintf(format, va);
    va_end(va);

    return rv;
};

int main(void) {
    int x = 10;
    float y = 3.2;
    my_print(3490, "x is %d, y is %f\n", x, y);
}