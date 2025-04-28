#include <stdio.h>

// fgets - to get the whole line 
int main(void){
    FILE *fp;
    char s[1024];
    int linecount = 0;
    fp = fopen("quote.txt", "r");
    while (fgets(s, sizeof s, fp) != NULL){
        printf("%d: %s", ++linecount, s);
    };
    fclose(fp);
}