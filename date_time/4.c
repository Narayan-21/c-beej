// Formatted date outputs 

#include <stdio.h>
#include <time.h>

int main(void) {
    char s[128];

    time_t now = time(NULL);
    
    strftime(s, sizeof s, "%c", localtime(&now));
    puts(s);

    strftime(s, sizeof s, "%A, %B %d", localtime(&now));
    puts(s); 

    strftime(s, sizeof s, "It's %I:%M:%S %p", localtime(&now));
    puts(s);

    strftime(s, sizeof s, "ISO 8601: %FT%T%z", localtime(&now));
    puts(s);
}