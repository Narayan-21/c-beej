// converting time_t to struct tm
// localtime() - converts time_t to a struct tm in local time.
// gmtime() - converts time_t to a struct tm in UTC time.

#include <stdio.h>
#include <time.h>

int main(void){
    time_t now;
    now = time(NULL);
    printf("Local: %s", asctime(localtime(&now)));
    printf("  UTC: %s", asctime(gmtime(&now)));
}