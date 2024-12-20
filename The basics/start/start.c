#include <stdio.h>
#include <stdbool.h>

int main()
{
    //---Variables:---

    int age = 22;
    float balls = 2.45;
    char p = 'p';
    char name[] = "Goob";

    //---Print/console log:---

    // \ followed by any character is an escape sequence, specifying actions within a string or text
    // Using % in a string will allow you to insert variables into the print statement
    printf("%s is a \t nerd and hates the letter %c.\n", name, p);
    printf("%s is %d years old.\n", name, age);
    printf("%s is \'watching\' you right now, you have %0.2f seconds before you explode.", name, balls);

    // --Datatypes:--

    int day = 10; // Single character %c

    char letters[] = "abcd"; // Array of characters

    float secondsBeforeDetonation = 14.790520483923; // 4 bytes, 32 bits of precision (6-7 digits) %f

    double d = 3.110375524210245; // 8 bytes, 64 bits of precision (15-16 digits) %lf

    bool isAwesome = true; // 1 byte, true/false, %d

    char f1 = 100; // 1 byte, -128 through 127 %d (WILL PRINT NUM) or %c (USES ASCII TABLE CONVERSION)

    unsigned char f2 = 255; // 1 byte, 0 through 255 %d (WILL PRINT NUM) or %c (USES ASCII TABLE CONVERSION)

    short int benis1 = 32767; // 2 bytes (-32,768 to 32,767) %d

    unsigned short int benis2 = 65535; // 2 bytes (0 to 65,535) %d

    int benis3 = 2147483647; // 4 bytes (-2,147,483,648 to 2,147,483,647) %d

    unsigned int benis4 = 4294967295; // 4 bytes (0 to 4,294,967,295) %u

    long long int benis5 = 9223372036854775807; // 8 bytes (0 to 9,223,372,036,854,775,807) %lld

    unsigned long long int mybenis = 18446744073709551615U; // 8 bytes (0 to 18,446,744,073,709,551,615) %llu

    // --Arithmatic operations--

    float yuh = 12 / (float)5; // Put float after / when dividing by ints to convert to float

    return 0; // Will return 0 if there are no errors, otherwise will return 1
}