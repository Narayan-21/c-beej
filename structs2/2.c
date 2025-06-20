#include <stdio.h>

struct passenger {
    char *name;
    int covid_vaccinated;
};

#define MAX_PASSENGERS 8

struct spaceship {
    char *manufacturer;
    struct passenger passenger[MAX_PASSENGERS];
};

int main(void) {
    struct spaceship s = {
        .manufacturer = "General Products",
        .passenger = {
            [0].name = "First last",
            [0].covid_vaccinated = 0,
            [7] = {.name = "Tesla", .covid_vaccinated=1},
        }
    };

    printf("Passenger for %s ship: \n", s.manufacturer);
    for (int i =0; i < MAX_PASSENGERS; i++) {
        if (s.passenger[i].name != NULL){
            printf("    %s (%svaccinated)\n",
            s.passenger[i].name,
            s.passenger[i].covid_vaccinated? "": "not "
            );
        }
    }
}