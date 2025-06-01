// Volatile Simple Example
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

volatile bool flag = false;

void interrupt_simulator() {
    flag = true;
};

int main() {
    printf("Waiting for interrupt ........");
    for (int i=0; i<100000; i++) {
        if (i == 50000) {
            interrupt_simulator();
        }
        if (flag) {
            printf("Interrupt received");
            break;
        }
    };
    return 0;
}