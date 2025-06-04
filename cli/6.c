#include <stdio.h>

int main(int argc, char **argv, char **env) {
    (void)argc; (void)argv;
    for (char **p = env; *p != NULL; p++) {
        printf("%s \n", *p);
    }

    for (int i = 0; env[i] != NULL; i++) {
        printf("%s\n", env[i]);
    }
}