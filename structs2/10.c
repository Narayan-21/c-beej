// Zero-width unnamed bit fields

// Compiler packs all of the following in a single unsinged int.
struct foo {
    unsigned int a:1;
    unsigned int b:2;
    unsigned int c:3;
    unsigned int d:4;
};

// If we need a&b in one and c&d in another unsigned int - use zero-width unnamed bit-field

struct bar {
    unsigned int a:1;
    unsigned int b:2;
    unsigned int :0; // <-- Zero width unnamed bit field
    unsigned int c:3;
    unsigned int d:4;
};

