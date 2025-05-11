// Use case of manual memory allocation 
// 1. use of realloc() to grow a buffer as we read in more data
// 2. use of realloc() to shrink the buffer down to a perfect size after we've completed the read.


#include <stdio.h>
#include <stdlib.h>

char *readlines(FILE *fp) {
    int offset = 0 ;
    int bufsize = 4;
    char *buf;
    int c;

    buf = malloc(bufsize);
    if (buf == NULL) {
        return NULL;
    };

    // read until new line or EOF
    while (c = getc(fp), c!='\n' && c!=EOF) {
        if (offset == bufsize - 1 ) {
            bufsize *= 2;
            char *new_buf = realloc(buf, bufsize);

            if (new_buf == NULL) {
                free(buf);
                return NULL;
            };

            buf = new_buf;
        }
        buf[offset++] = c;
    };

    if (c == EOF && offset == 0){
        free(buf);
        return NULL;
    }

    if (offset < bufsize - 1) {
        char *new_buf = realloc(buf, offset+1);
        if (new_buf != NULL ){ 
            buf = new_buf;
        };
    }

    // adding the null terminator
    buf[offset] = '\0';
    return buf;
}

int main(void) {
    FILE *fp = fopen("foo.txt", "r");
    char *line;

    while ((line = readlines(fp)) != NULL) {
        printf("%s\n", line);
        free(line);
    };
    fclose(fp);
};