#include <stdio.h>

// until we get the null-termination.

int my_len(char *s){
    int count = 0;
    while (s[count] != '\0'){
        count ++;
    };
    return count;
}

int main() {
    char str[] = "Hello";
    printf("Character 1: %c \n", str[0]);
    printf("Character 5: %c \n", str[4]);
    for (int i = 0; str[i]!='\0'; i++){
        printf("%c \n", str[i]);
    }

    printf("length - %d \n", my_len("One string"));
    return 0;
};