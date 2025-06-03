// Exit Status

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("usage: mult x y \n");
        return EXIT_FAILURE; // Indicate to the shell that this did not work
    }
    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return 0;
}

// int main() will return 0 by default.
// 0 -> success
// 1 -> failure
