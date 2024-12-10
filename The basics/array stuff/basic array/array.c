#include <stdio.h>

int main()
{
    // explicitly set max size of array
    double prices[10] = {5.0, 10.0, 15.0, 20.0, 50.0};

    // sizeof() gets the size of specified data in bytes.
    // in this example a double is 8 bytes, the array consists of 10 doubles which is 80 bytes
    // so we get the size of the first element in an array since they are all the same
    // then we divide the size of the entire array by a single element of it therefore getting it's length

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("\n%f", prices[i]);
    }

    return 0;
}