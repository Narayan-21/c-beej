// Converting struct tm to time_t type
// using - mktime()

#include <stdio.h>
#include <time.h>

struct tm some_time = {
    .tm_year=82,
    .tm_mon=3,  
    .tm_mday=12,
    .tm_hour=12,
    .tm_min=0,  
    .tm_sec=4,  
    .tm_isdst=-1
};

int main(void) {
    time_t some_time_epoch;
    some_time_epoch = mktime(&some_time);
    printf("%s", ctime(&some_time_epoch));
    printf("Is DST: %d\n", some_time.tm_isdst);
}