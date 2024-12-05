#include <stdio.h>
#include <math.h>

int main()
{
    const double PI = 3.14159;
    double circumference;
    double radius;
    double area;

    printf("\n Enter the radius of a circle doofus: ");

    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    area = PI * pow(radius, 2.0);

    printf("\n The circumference of your circle is %lf. \n The area of your circle is %lf.", circumference, area);

    return 0;
}