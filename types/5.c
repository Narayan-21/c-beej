// Generic Selection example

#include <stdio.h>
#include <stdlib.h>


#define FMTSPEC(x) _Generic((x),\
    int: "%d",\
    long: "%ld",\
    float: "%f",\
    double: "%f",\
    char *: "%s"\
)

#define PRINT_VAL(x) do{\
    char fmt[512];\
    snprintf(fmt, sizeof fmt, #x " = %s\n", FMTSPEC(x));\
    printf(fmt, (x));\
} while(0)

int main(void) {
    int i = 10;
    float f = 3.141;
    char *s = "Hello World!!";

    PRINT_VAL(i);
    PRINT_VAL(f);
    PRINT_VAL(s);
}
