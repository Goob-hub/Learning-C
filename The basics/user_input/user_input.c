#include <stdio.h>

int main()
{
    int age;

    printf("\nHow old are you Mr.Freakbob?");
    scanf("%d", &age); // Will look for user input in form of integer, defaults to 0

    printf("Says here that you're %d years old Freakbob.", age);

    return 0;
}