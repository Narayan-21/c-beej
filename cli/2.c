#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int total = 0;
    (void)argc;
    for (char **p = argv + 1; *p != NULL; p++) {
        int value = atoi(*p);
        total += value;
    };
    printf("%d\n", total);
    return 0;
}

// changing the argv[0] results in changing of process (ps) that we list in the unix-like systems.