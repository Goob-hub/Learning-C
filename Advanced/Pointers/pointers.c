#include <stdio.h>

void printAge(int *pAge) {
    printf("Your age is %d years old.", *pAge);
    return;
}

int main() {

    //A pointer is a vairable like reference that holds the memory address of another variable!
    //Indirection operator (*) is used to declare a pointer (value at address)

    int age = 22;
    int *pAge = NULL; //Considered good practice if you set a pointer to NULL when first creating it
    pAge = &age;

    //The value of pAge is the same as the address of age
    printf("Address of age = %p\n", &age);
    printf("Value of pAge = %p\n", pAge);

    //The value of age is the same as the value stored at the pAge memory address
    printf("Value of age = %d\n", age);
    printf("Value at address of pAge = %d\n", *pAge);// * goes before pAge here cause we want to dereference it as an address

    printAge(pAge);

    return 0;
}