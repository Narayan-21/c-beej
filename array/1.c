// static for Arrays in parameter lists
// This is always followed by a dimension - if dim is 4 then compiler is gonna assume that any array we pass to the function is gonna have atleast 4 elements

#include <stdio.h>

int func(int p[static 4]){
    printf("First 4 elements: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    return 0;
}

int main(void) {
    int a[] = {11,22,33,44};
    int b[] = {11,22,33,44,55};
    int c[] = {11,22};

    func(a);
    func(b);
    func(c); // will throw an error
}

