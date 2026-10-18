// Counts the number of digits in the input number.

#include<stdio.h>

int main (void)
{
    int input, digitCount;

    printf("Enter a number between 0 and 9999: ");
    scanf("%d", &input);
    
    if (input < 0) digitCount = -1;
    else if (input <= 9) digitCount = 1;
    else if (input <= 99) digitCount = 2;
    else if (input <= 999) digitCount = 3;
    else if (input <= 9999) digitCount = 4;
    else digitCount = -1;

    if (digitCount == -1) printf("Value not in range.");
    else printf("The number has %d digits.", digitCount);

    return 0;
}
