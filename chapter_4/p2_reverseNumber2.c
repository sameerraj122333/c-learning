// Takes a 3 digit number as input and reverses the digits

#include<stdio.h>

int main (void)
{
    int input, onesDigit, tensDigit, hundredsDigit, reversedNumber;
    printf("Enter a three digit number: ");
    scanf("%3d", &input);

    hundredsDigit = input / 100;
    tensDigit = (input % 100) / 10;
    onesDigit = (input % 100) % 10;
    reversedNumber = ((onesDigit * 10) * 10) + (tensDigit * 10) + hundredsDigit;

    printf("The reversed number is: %.3d\n", reversedNumber);
    
    return 0;
}
