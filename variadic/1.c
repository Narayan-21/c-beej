// Passing any n number of arguments to a function - always must be greater than 0
#include <stdio.h>

void func(int a, ...)
{
    printf("a is %d\n", a);
}

int main(void)
{
    func(2, 3, 4, 5, 6);
}