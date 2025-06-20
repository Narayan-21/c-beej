// Anonymous struct use with typedef

#include <stdio.h>


typedef struct {
    char *name;
    int leg_count, speed;
} animal;

int main(void) {
    animal a, b, c;
    a.name = "antelope";
    c.leg_count = 5;
    printf("a's name is - %s and c is having %d legs \n", a.name, c.leg_count);
}