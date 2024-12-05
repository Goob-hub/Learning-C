#include <stdio.h>
#include <math.h>

int main()
{

    double hypotenuse;
    double leg1;
    double leg2;

    printf("\n Enter the length of leg 1 for your triangle: ");
    scanf("%lf", &leg1);

    printf("\n Enter the length of leg 2 for your triangle: ");
    scanf("%lf", &leg2);

    hypotenuse = sqrt(pow(leg1, 2.0) + pow(leg2, 2.0));

    printf("\n The hypotenuse of your triangle is %lf", hypotenuse);

    return 0;
}