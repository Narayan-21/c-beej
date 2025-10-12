// Multibyte and wide-character conversions
// mbtowc() : Convert a multibyte character to a wide character.
// wctomb() : Convert a wide character to a multibyte character.
// mbstowcs() : Convert a multibyte string to a wide string.
// wcstombs(): Convert a wide string to a multibyte string.

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL, "");

    char *mb_string = "The cost is \u20ac1.23";
    size_t mb_len = strlen(mb_string);

    wchar_t wc_string[128];
    size_t wc_len = mbstowcs(wc_string, mb_string, 128);

    printf("multibyte: \"%s\" (%zu bytes)\n", mb_string, mb_len);
    printf("wide char: \"%ls\" (%zu characters)\n", wc_string, wc_len);
} 