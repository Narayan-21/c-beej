// Common initial sequences in Unions

struct a {
    int x;
    float y;
    char *p;
};

struct b {
    int x;
    float y;
    double *p;
    short z;
};

union foo {
    struct a sa;
    struct b sb;
};

// Now the f.sa.x == f.sb.x
// and 
// f.sa.y == f.sb.y

// both x and y are common initial sequence in both the struct