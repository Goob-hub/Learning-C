#include <stdio.h>
#include <string.h>

int main()
{
    char name[25]; // 25 byte character limit
    int age;

    printf("\nWhat is your full name nerd?");
    // scanf("%s", &name);
    fgets(name, 25, stdin); // Will include new line space at end of string, but reads all spaces in string

    name[strlen(name) - 1] = '\0'; // gets rid of new line character at end of string

    printf("\nHow old are you %s?", &name);
    scanf("%d", &age); // Will look for user input in form of integer, defaults to 0

    printf("\nSays here that you're %d years old %s.", age, name);

    return 0;
}