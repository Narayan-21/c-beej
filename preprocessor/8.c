// macro with argument

#include <stdio.h>
#include <math.h> // for sqrt()

#define SQR(x) ((x)*(x))
#define TRIANGLE_AREA(w, h) (0.5 * (w) * (h))
#define QUADP(a, b, c) ((-(b) + sqrt((b) * (b) - 4 * (a) * (c))) / (2 * (a)))
#define QUADM(a, b, c) ((-(b) - sqrt((b) * (b) - 4 * (a) * (c))) / (2 * (a)))
#define QUAD(a, b, c) QUADP(a, b, c), QUADM(a, b, c)

// variable args
#define X(a,b,...) (10*(a) + 20*(b)), __VA_ARGS__

int main(void) {
    printf("%d \n", SQR(12));
    printf("Equation:- 2*x^2 + 10*x + 5 = 0\n");
    printf("Solution:- x = %f or x = %f\n", QUAD(2, 10, 5));
    printf("Variable args: \n");
    printf("%d %f %s %d\n", X(5, 4, 3.14, "Hi!", 12));
}