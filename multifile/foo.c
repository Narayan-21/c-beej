#include <stdio.h>
#include "bar.h" // include from same dir.

int main(void) {
    printf("%d \n", add(2,3));
};

// Compiling - > gcc -o foo foo.c bar.c

// Compiling from Object files =>
// gcc -c foo.c  -> produces foo.o (object files)
// gcc -c bar.c  -> produces bar.o (object files)

// gcc -o foo foo.o bar.o -> compiling by linking these multiple object files

// Why code -> Object file -> Executable and not directly to the executable?
// Ans::
// Let’s say you had a thousand C files. You could compile them all to object files to start (slowly) and then combine all those object files into an executable (fast).
// Now say you modified just one of those C source files—here’s the magic: you only have to rebuild that one object file for that source file! And then you rebuild the executable (fast). All the other C files don’t have to be touched.
// In other words, by only rebuilding the object files we need to, we cut down on compilation times radically. (Unless of course you’re doing a “clean” build, in which case all the object files have to be created.)