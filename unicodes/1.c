// Unicode - a numeric value representing a character
// 8 bytes can hold values from 0-255 (in Unicode, the numeric value 66 represents “B”, and 960 represents “π”) hence "B" is covered but not "π".
// Question - How to represent those big numbers in memory?
// So code point - tell us the serial number of a particular character and Encoding tell use how we're going to represent that number in the memory
// Common encodings - UTF-8, UTF-16, UTF-32

// \u works for 16-bits unicode code points.
// \U works for 32-bits unicode code points.

#include <stdio.h>
#include <string.h>

int main() {
    char *s1 = "\u20AC1.23"; // code point for Euro symbol
    char *s2 = "\U0001D4D1";

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%zu\n", strlen(s1));

    return 0;
}