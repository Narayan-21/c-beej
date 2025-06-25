// Flexible array members in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct len_string {
    int length;
    char data[];
};

struct len_string* len_string_from_c_string(const char* input) {
    int len = strlen(input);
    // here memory = struct + enough space for string + null terminator
    struct len_string* s = malloc(sizeof(struct len_string) + len + 1);
    if (!s) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
    s->length = len;
    memcpy(s->data, input, len+1); // include null terminator
    return s;
};

int main() {
    const char* original = "Hello, World!";
    struct len_string* my_string = len_string_from_c_string(original);
    printf("Length: %d\n", my_string->length);
    printf("Data: %s\n", my_string->data);
    free(my_string);
    return 0;
}