#include <stdio.h>

int main(void){
    FILE *fp;
    FILE *fp2;
    int x = 32;
    // fputc - put the character
    // fputs - put the string
    fp = fopen("output.txt", "w");
    fp2 = stdout;
    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello world! \n", fp);
    fputs("Hello world from Stdout \n", fp2);
    fclose(fp);
}