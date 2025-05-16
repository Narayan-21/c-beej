// strtol functions - part 2
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = "34x90";
    char *badchar;

    unsigned long int x = strtoul(s, &badchar, 10);

    printf("%lu\n", x);

    printf("Invalid character: %c \n", *badchar);
    // If nothing goes wrong than the badchar will point to the NUL terminator

    if (*badchar == '\0') {
        printf("Success! %lu \n", x);
    } else {
        printf("Partial conversion: %lu\n", x);
        printf("Invalid character: %c\n", *badchar);
    };
}