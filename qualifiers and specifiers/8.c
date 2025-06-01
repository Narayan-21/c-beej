// static
// file-scope: Similar effect as of static inside a function scope. But here, the variable is not visible outside of this particular file. 

#include <stdio.h>

int counter = 0;

void increment() {
    counter++;
    printf("Counter: %d \n", counter);
};

int main() {
    increment();
    increment();
    increment();
    return 0;
}