#include <stdio.h>
// Structs - user defined types
struct Car
{
    char *name;
    float price;
    int speed;
};


struct Car saturn; // Struct Declaration

void set_price(struct Car *c, float new_price){
    c->price = new_price;
    // If passing struct, use dot(.)
    // If passing a pointer to a struct, use arrow(->)
}

int main(void){
    struct Car Mars = {"D1 version", 12.99, 12}; // Struct Initialization including declaration - order matters
    printf("Name: %s\n", Mars.name);
    printf("Price: %f\n", Mars.price);
    printf("Speed: %d\n", Mars.speed);
    struct Car Europa = {.price=1.99, .speed=99,.name = "D2 version"}; // Order does not matter.
    printf("Europa Name: %s\n", Europa.name);
    printf("Europa Price: %f\n", Europa.price);
    printf("Europa Speed: %d\n", Europa.speed);
    set_price(&Europa, 11.99);
    printf("New Europa price: %f\n", Europa.price);
    return 0;
}
