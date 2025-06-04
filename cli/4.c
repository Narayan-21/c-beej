// Env var - 1

// In unix-like system - extern char **environ; => its an array of strings terminated by NULL pointer.
#include <stdio.h>

extern char **environ; // MUST be extern AND named "environ"

int main(void) {
    for (char **p = environ; *p != NULL; p++) {
        printf("%s\n", *p);
    };
    for (int i = 0; environ[i] != NULL; i++) {
        printf("%s\n", environ[i]);
    }
}