// Takes a 3 digit number as input and reverses the digits

#include<stdio.h>

int main (void)
{
    int onesDigit, tensDigit, hundredsDigit;

    printf("Enter a three digit number: ");
    scanf("%1d %1d %1d", &onesDigit, &tensDigit, &hundredsDigit);

    printf("The reversed number is: %1d%1d%1d\n", hundredsDigit, tensDigit, onesDigit);

    return 0;
}
