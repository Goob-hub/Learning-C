#include <stdio.h>

int main()
{
    //---Variables:---

    int age = 22;
    float balls = 2.45;

    // Can only store a single character
    char p = 'p';

    // Storing multiple characters, a string is technically an array of chars
    char name[] = "Gabriel";

    //---Print/console log:---

    // \ followed by any character is an escape sequence, specifying actions within a string or text
    printf("Goob is a \t nerd.\n");
    printf("Goob is %d years old.\n", age);
    printf("I'm \'watching\' you right now.");

    // Will return 0 if there are no errors, otherwise will return 1
    return 0;
}