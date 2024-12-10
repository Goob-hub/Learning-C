#include <stdio.h>

// --- Function prototype: ---
// Function prototypes ensure that functions are called with correct arguments
// Many C compilers do not flag an error when a function is missing arguments, so this accomplishes that
// This also helps with making code clean and easy to navigate
void hello(char[], int);

int main()
{
    char name[] = "Goob";
    int age = 22;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s, you are %d years old!");
}