#include <stdio.h>
#include <string.h>

int str_len(char a[]){
    int count = 0;
    while (a[count] != '\0'){
        count ++;
    }
    return count;
}

int str_cpy(char *dest, const char *src){
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main(void){
    char s[] = "Hello world!"; // String Literal
    char t[100];
    char r[100];
    for (int j=0; j<12; j++){
        printf("%c\n", s[j]); // %c - prints single character
    }
    strcpy(t, s);
    t[0] = 'z';
    str_cpy(r, t);
    r[2] = 'N';
    printf("copied string %s\n", t);
    printf("copied second string %s \n", r);
    printf("the string is of length %zu\n", strlen(s));
    printf("the length of the string is %d\n", str_len(s));
    return 0;
}