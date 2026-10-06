/*
Converts Fahrenheit to Celsius, where Fahrenheit is taken from user input.
*/

#define FREEZING_TEMP 32.0f
#define CONVERSION_FACTOR ( 5.0f / 9.0f )
#include <stdio.h>

int main ()
{
    float fahr, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahr);

    celsius = (fahr - FREEZING_TEMP) * CONVERSION_FACTOR;
    printf("The corresponding temperature in Celsius is %.1f\n", celsius);
    return 0;
}
