// Date time data types - 
// 1. time_t - holds calender time
// 2. struct tm - holds the components of the time e.g. hour, min, month, year

// Getting started -

#include <stdio.h>
#include <time.h>

int main(void) {
    time_t now;
    now = time(NULL);
    printf("Current time: %s", ctime(&now));
};