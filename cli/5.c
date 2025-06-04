// Env var - 2

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *val1 = getenv("CONDA_DEFAULT_ENV");
    char *val2 = getenv("MY_VAR");
    if (val1 == NULL) {
        printf("Cannot find the CONDA_DEFAULT_ENV environment variable \n");
        return EXIT_FAILURE;
    };
    if (val2 == NULL ){
        printf("Cannot find the MY_VAR environment variable \n");
        return EXIT_FAILURE;
    }
    printf("Values %s and %s \n", val1, val2);
}