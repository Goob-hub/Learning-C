#include <stdio.h>

int main()
{
    char operator;
    int value;
    int num1;
    int num2;

    printf("\n balls");

    printf("\nInput the first number for your operation: ");
    scanf("%d", &num1);

    printf("\nEnter the second number for your operation: ");
    scanf("%d", &num2);

    printf("\nEnter the type of operation you want to perform: ");
    scanf(" %c", &operator);

    if (operator== '+')
    {
        value = num1 + num2;
    }
    else if (operator== '-')
    {
        value = num1 - num2;
    }
    else if (operator== '*')
    {
        value = num1 * num2;
    }
    else if (operator== '/')
    {
        value = num1 / num2;
    }
    else
    {
        printf("\nYou did not enter a valid operator!");
    }

    printf("\nThe value of your equation is: %d", value);

    return 0;
}