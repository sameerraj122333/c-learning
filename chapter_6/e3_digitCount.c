// Counts the number of digits in the number entered by the user.

#include<stdio.h>

int main (void)
{
    int input, digitCount = 0;

    printf("This program counts the number of digits in a number.\n");
    printf("Enter a number: ");
    scanf("%d", &input);

    do 
    {
        input /= 10;
        ++digitCount;
    } while (input > 0);
    printf("The number has %d digits.", digitCount);

    return 0;
}
