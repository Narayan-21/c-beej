// unnamed structs in union

struct {
    int x,y;
} s;

union foo {
    struct {
        int x,y;
    } a;
    struct {
        int z,w;
    } b;
};

// Then we can access these via 
union foo f;
// f.a.x = 1;
// f.a.y = 2;
// f.b.z = 3;
// f.b.w = 4;