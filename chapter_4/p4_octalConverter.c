// Takes a decimal number as input and converts it to octal (base 8).

#include<stdio.h>

int main (void)
{
    int input, octalDigit1, octalDigit2, octalDigit3, octalDigit4, octalDigit5;

    printf("Enter a number from 0 to 32767: ");
    scanf("%d", &input);

    octalDigit1 = input % 8;
    octalDigit2 = (input / 8) % 8;
    octalDigit3 = (input / (8 * 8)) % 8;
    octalDigit4 = (input / (8 * 8 * 8)) % 8;
    octalDigit5 = (input / (8 * 8 * 8 * 8)) % 8;

    printf("The octal equivalent is: %1d%1d%1d%1d%1d", 
        octalDigit5, octalDigit4, octalDigit3, octalDigit2, octalDigit1);
    
    return 0;
}
