#include <stdio.h>
#include <ctype.h>

int main()
{
    /*
        Formula for °F ---> °C: (°F - 32) × 5/9;

        Formula for °C ---> °F: °C × (9/5) + 32;
    */

    char unit;
    float temperature;
    float newTemperature;

    printf("\n Is your temperature in Fahrenheit (F) or in Celcius (C)?");
    scanf("%c", &unit);

    if (islower(unit))
    {
        printf("\n Make sure your letter is typed in upper case!");
        return 0;
    }
    else if (unit != 'C' || unit != 'F')
    {
        printf("\n Please only enter F (Fahrenheit) or C (Celcius) for your specified unit of measurment.");
        return 0;
    }

    printf("\n What is the temperature outside?");
    scanf("%f", &temperature);

    if (unit == 'C')
    {
        newTemperature = (temperature * 1.8) + 32;
        printf("\n Your temperature in Farenheit is %f", newTemperature);
    }
    else if (unit == 'F')
    {
        newTemperature = (temperature - 32) * 5 / 9;
        printf("\n Your temperature in Celcius is %f", newTemperature);
    }

    return 0;
}
