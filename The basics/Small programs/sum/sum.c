#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;

    // Will execute block of code at least once no matter what
    do
    {
        printf("Enter a number above 0 to add to your sum!");
        scanf("%d", &number);
        sum += number;
    } while (number > 0);

    printf("\nYour final sum is %d", sum);

    return 0;
}