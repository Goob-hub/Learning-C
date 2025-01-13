#include <stdio.h>

int main() {

    // & AND
    // | OR
    // ^ XOR
    // << LEFT SHIFT
    // >> RIGHT SHIFT

    //Numbers and how they are represented in binary
    int x = 6; // 00000110
    int y = 12; // 00001100
    int z = 0; // 00000000

    z = x << 1; // Result is 12 because every bit is shifted to the left one position

    z = y >> 1; // Result is 6 because every bit is shifted to the right one position

    z = x & y; // Result is 4 because one of the columns on both 6 and 12 in binary are both one so the same column in z binary will become a value of 1 which just so happens to represent 4

    z = x | y; // Result is 14 because only one or both of the columns in 6 or 12 binary has to be 1 for the respective column in our z value to be turned into 1

    z = x ^ y;// Result is 10 because only 1 not both of the columns in 6 or 12 binary has to be 1 for the respective column in our z value to be turned into 1

    return 0;
}