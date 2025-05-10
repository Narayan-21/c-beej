// Void pointer use case ::


#include <string.h>
#include <stdio.h>

void memcpy_double(double *a, double *b, int count) {
    for (int i=0; i< count; i++) {
        a[i] = b[i];
    };
}

int main() {
    double src[] = {10.2, 23.69, 69.420, 420.69};
    double dest[4];

    int length = sizeof src / sizeof src[0];
    memcpy_double(dest, src, length);

    for (int i = 0; i<length; i++) {
        printf("destination[%d] = %.2f\n", i, dest[i]);
    }

    return 0;
}