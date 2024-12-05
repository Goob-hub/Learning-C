#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    double circumference;
    double radius;

    printf("\n Enter the radius of a circle doofus: ");

    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("\n The circumference of your circle is %lf", circumference);

    return 0;
}