#include <stdio.h>
#include <threads.h>

char *s = "Hello!";
char t = '\''; // backslash (escape sequence)) to put '.

// Other escapes - 
// 1. \n - newline character
// 2. \' - Single quote
// 3. \" Double quotes
// 4. \\ - used for literal \ in a string or character 

// 5. \a - alert - makes the terminal make sound or flesh or both
// 6. \b - backspace - moves the cursor back a character
// 7. \f - formfeed - No use today, can skip
// 8. \r - return - move to the beginning of the same line
// 9. \t - horizontal tab
// 10. \v - vertical tab
// 11. \? - Literal question mark


int main(void) {
    for (int i= 10; i>=0; i--) {
        printf("\rT minus %d second%s... \b", i, i != 1? "s": "");
        fflush(stdout); // force output to update
        thrd_sleep(&(struct timespec){.tv_sec=1}, NULL);
    };
    printf("\rLiftoff!             \n");
};

// \123	Embed the byte with octal value 123, 3 digits exactly.
// \x4D	Embed the byte with hex value 4D, 2 digits.
// \u2620	Embed the Unicode character at code point with hex value 2620, 4 digits.
// \U0001243F	Embed the Unicode character at code point with hex value 1243F, 8 digits.
