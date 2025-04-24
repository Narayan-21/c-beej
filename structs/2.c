// passing Structs to a function

#include <stdio.h>

struct Car {
    char *name;
    float price;
    int speed;
};

void set_price(struct Car *c, float new_price){
    // c.car won't work!!
    // (*c).price = new_price will work but its ugly. Better way is the following ->
    c->price = new_price; // The arrow operator;

    // -> If we have the struct, (.) will work
    // -> If we have the pointer to the struct then we wanna use arrow only.
};

int main(void){
    struct Car saturn = {.speed=121.22, .name="saturn L1"};
    set_price(&saturn, saturn.price);


    // Copying struct a to struct b.
    struct Car a = {.name="a", .speed=122, .price=22.11};
    struct Car b;
    b = a;
    printf("Car a: Name = %s, Price = %.2f, Speed = %d\n", a.name, a.price, a.speed);
    printf("Car b: Name = %s, Price = %.2f, Speed = %d\n", b.name, b.price, b.speed);
};