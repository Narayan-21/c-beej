// Internal multibyte and Wide character conversion - focusing on parse state and restartable functions

// mbstate_t : holds current in-progress state of a multibyte conversion.
// mbstowcs(), wctomb() : are non-restartable : they internally use mbstate_t inside the function - not thread-safe
// mbrtowc(), wcrtomb(), mbsrtowcs(), wcsrtombs() : are restartable : we provide our own mbstate_t here - and these can be used for multi-threading

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    char *mb_string = "The cost is \u20ac1.23";
    size_t mb_len = strlen(mb_string);

    wchar_t wc_string[128];

    // Conversion state
    mbstate_t mbs;
    memset(&mbs, 0, sizeof mbs);

    const char *invalid = mb_string;
    size_t wc_len = mbsrtowcs(wc_string, &invalid, 128, &mbs);

    if (invalid == NULL){
        printf("No invalid characters found \n");
        printf("multibyte: \"%s\" (%zu bytes)\n", mb_string, mb_len);
        printf("wide char: \"%ls\" (%zu characters)\n", wc_string, wc_len);
    } else {
        ptrdiff_t offset = invalid - mb_string;
        printf("Invalid character at offset %td\n", offset);
    }
};