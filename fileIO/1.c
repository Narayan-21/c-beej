#include <stdio.h>

int main(void){
    FILE *fp; // var to represent open file
    fp = fopen("hello.txt", "r"); // open the file for reading
    int c = fgetc(fp); // read a single character
    printf("%c\n", c);
    fclose(fp); // close the file when done
};

// the FILE *fp is the pointer to the file object in C.
// it keep track of our position in the file. So subsequent calls to fgetc() would get the next character in the file, and then the next, until the end.