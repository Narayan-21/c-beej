// convert a number to string
// sprintf() & snprintf()

// convert from a string to a number 
// from stdlib - atoi - string to int
// atof - string to float
// atol - string to long int
// atoll - string to long long int

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char s[10];
    float f = 3.14159;
    snprintf(s, 10, "%f", f);
    printf("String value: %s \n", s);

    char *pi = "3.14159";
    float f2;
    f2 = atof(pi);
    printf("%f2 \n", f2);
};