// Takes a 2 digit number as input and reverses the digits

#include<stdio.h>

int main (void)
{
    int input, onesDigit, tensDigit, reversedNumber;
    printf("Enter a two digit number: ");
    scanf("%2d", &input);

    onesDigit = input % 10;
    tensDigit = input / 10;
    reversedNumber = (onesDigit * 10) + tensDigit;

    printf("The reversed number is: %.2d\n", reversedNumber);
    
    return 0;
}
