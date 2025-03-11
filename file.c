#include <stdio.h>

int main(void){
    FILE *fp; // variable to represent the open file
    fp = fopen("hello.txt", "r");
    int c = fgetc(fp); // Read a single character
    printf("First print - %c\n", c);
    int c2 = fgetc(fp);
    printf("Second print - %c\n", c2); // prints 'e' since File* keep track of our position in the file.
    printf("Rest of the Characters - ");
    while ((c = fgetc(fp)) != EOF){
        printf("%c", c);
    }
    fclose(fp); // Close the file
}

