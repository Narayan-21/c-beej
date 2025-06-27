// enums can only be integers type. => #define can be of any type.
// by default, the values of enums start from 0

enum {
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
};

enum {
    A, // 0
    B, // 1
    C=5, // 5
    D, // 6
    E, // 7
    F=10, // 10
    G // 11
};

enum resource {
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
};

// Declare a variable "r" of type "enum resource"

enum resource r = BRICK;

typedef enum {
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
} RESOURCE;

RESOURCE r = BRICK;

// Declare an enum and some initialized variables of that type:

enum {
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
} r = BRICK, s = WOOD;


// Declare an enum and some initialized variables of that type:

enum resource {   // <-- type is now "enum resource"
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
} r = BRICK, s = WOOD;