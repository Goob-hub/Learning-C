#include <stdio.h>

int main() {

    //Memory = an array of bytes within ram
    //Memory block = a single byte within memory used to hold some value
    //Memory address = The address of where a memory block is located

    char a = 'a';
    char b[2];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));

    // Memory addresses are made up of num 1-9 and letters A-F (Hexidecimal)
    printf("Memory address %p\n", a);
    printf("Memory address %p\n", b);

    return 0;
}