
int main(void) {
    // This one will throw a warning - 
    // Since y is a const pointer and the pointer to this pointer aka z is not a const, resulting in the discarding of 'const'ness.
    // int x = 3040;
    // int *const y= &x;
    // int **z = &y;

    // Following will work as expected
    int x = 3040;
    int *const y= &x;
    int *const *z = &y;
};
