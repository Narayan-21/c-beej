// fread or fwrite in the C files for binary I/O
#include <stdio.h>

int main(void) {
    FILE *fp;
    unsigned char bytes[6] = {1,34,55,32,99,0};

    fp = fopen("output.bin", "wb");
    fwrite(bytes, sizeof(char), 6, fp);
    fclose(fp);
}