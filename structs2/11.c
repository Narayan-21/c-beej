// unions

union foo {
    int a,b,c,d,e,f;
    float g,h;
    char i,j,k;
};

// all these fields overlap in same space in the memory. sizeof(foo) is also 4 since the biggest in this union is int taking 4 bytes of memory.