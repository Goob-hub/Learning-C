#include <stdio.h>

int main()
{
    // First [] sets size of outer array
    // Second [] sets size of inner arrays
    int numbers[][4] = {{1, 2, 4, 5}, {6, 7, 8, 9}};

    printf("\n%d", numbers[1][3]);

    return 0;
}