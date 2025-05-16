// strtol functions - better error handling characteristics than atoi
// strtol functions also covers more types and more bases than atoi

// strtol - string to long int
// strtoll - string to long long int
// strtoul - string to unsigned long int
// strtoull - string to unsigned long long int
// strtof - string to float
// strtod - string to double
// strtold - string to long double

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = "2490";

    // NULL means that we don't care to learn about the error information.
    unsigned long int x = strtoul(s, NULL, 10);
    printf("%lu\n", x);

    char *s1 = "10101010";
    unsigned long int x2 = strtoul(s1, NULL, 2);
    printf("%lu\n", x2);
};