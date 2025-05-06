#include <stdio.h>

void main(void){
    FILE *fp;
    unsigned char C;
    fp = fopen("output.bin", "rb");
    while (fread(&C, sizeof(char), 1, fp) > 0){
        printf("%d\n", C);
    }
    fclose(fp);
}