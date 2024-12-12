#include <stdio.h>

void sort(int[], int);
void printarr(int[], int);

int main()
{
    int array[] = {9, 6, 5, 8, 1, 4, 7, 2, 3};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printarr(array, size);

    return 0;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printarr(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d", array[i]);
    }
}