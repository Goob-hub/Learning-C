#include <stdio.h>

enum Day
{
    Sun = 0,
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5,
    Sat = 6
};

int main()
{
    enum Day today = Sun;

    if (today == Sun || today == Sat)
    {
        printf("\nIt's the weekend, woohoo!");
    }
    else
    {
        printf("It's time to get to work nerdo!");
    }

    return 0;
}