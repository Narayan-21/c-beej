// Simple goto implementation :- skip a line of code and jump to a label. A lable is a identifier that can be a goto target, ending with semi-colon(:)

#include <stdio.h>

int main(void) {
    printf("One\n");
    printf("Two\n");

    goto skip_label;

    printf("three\n"); // skips this

    skip_label:
    printf("Five!\n");
    // goto skip_label; // infinite loop (will go backwards)
}
