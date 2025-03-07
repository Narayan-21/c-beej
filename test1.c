#include <stdlib.h>
#include <stdio.h>


itn main(void) {
    int goal_count = 2;
    switch (goal_count) {
        case 0:
            printf("You have no goals");
            break;
        case 1: 
            printf("You have one single goal");
            break;
        case 2:
            printf("You have 2 Goals");
            break;
        default:
            printf("you have plenty goals");
            break;
    }
};