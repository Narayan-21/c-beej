// Void pointers

#include <stdio.h>
#include <string.h>

// void pointer use in memcpy - 
// memcpy() takes advantage of the fact that if you iterate through char*s, you’re iterating through the bytes of an object no matter what type the object is.

struct antilope {
    int age;
    float weight;

};

int main(void){
    char s[] = "Goats!";
    char t[100];
    memcpy(t, s, 7); // copy 7-bytes including NULL terminator, from the src s to destination t.
    printf("%s\n", t);
    struct antilope my_antilope;
    struct antilope my_cloned_antilope;
    memcpy(&my_cloned_antilope, &my_antilope, sizeof my_antilope);
}