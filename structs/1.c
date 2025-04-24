#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};


void main(void){
    struct car saturn;
    saturn.name = "Saturn-1";
    saturn.price = 12342.22;
    saturn.speed = 55;

    printf("Name: %s\n", saturn.name);
    printf("Price: %f\n", saturn.price);
    printf("Top speed: %d\n", saturn.speed);

    // 2nd way to initialize the struct

    struct car audi = {"audi r8", 20000.01, 100};
    printf("Name: %s\n", audi.name);
    printf("Price: %f\n", audi.price);
    printf("Top speed: %d\n", audi.speed);

    // or

    struct car bmw = {.price=15000.00, .name="BMW M1"};
}