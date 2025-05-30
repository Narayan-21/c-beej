// restrict - a hint to the compiler that a particular piece of memory will only be accessed by one pointer and never another.
// undefined behaviour - otherwise
void swap(int *restrict a, int *restrict b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
};

int main(void) {
    int x = 10, y = 20;
    swap(&x, &y); // ok! since x & y points to diff mem address 
    swap(&x, &x); // undefined behaviour
}