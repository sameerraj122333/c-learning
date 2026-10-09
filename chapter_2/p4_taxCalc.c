// Calculates the total amount after 5% tax addition. Initial amount is taken as input from user.

#define TAX_PERCENT 5.0f / 100.0f
#include<stdio.h>

int main (void)
{
    float initial, total;

    printf("Enter the initial amount (in dollars and cents): ");
    scanf("%f", &initial);

    total = initial + initial * TAX_PERCENT;
    
    printf("Total amount after additio of tax: %.2f\n", total);
    return 0;
}
