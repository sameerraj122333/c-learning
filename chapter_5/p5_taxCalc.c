// Calculates the tax applied to an income based on the following criteria:
/*
Income          Amount of tax
Not over $750   1% of income
$750–$2,250     $7.50 plus 2% of amount over $750
$2,250–$3,750   $37.50 plus 3% of amount over $2,250
$3,750–$5,250   $82.50 plus 4% of amount over $3,750
$5,250–$7,000   $142.50 plus 5% of amount over $5,250
Over $7,000     $230.00 plus 6% of amount over $7,000
*/

#include<stdio.h>

int main (void)
{
    float income, tax;

    printf("Enter the taxable income (in dollars): ");
    scanf("%f", &income);
    
    if (income < 0.0f) printf("Invalid income.");
    else 
    {   
        if (income < 750.0f) tax = 0.01 * income;
        else if (income <= 2250.0f) tax = 7.50 + (0.02f * (income - 750.0f));
        else if (income <= 3750.0f) tax = 37.50f + (0.03f * (income - 2250.0f));
        else if (income <= 5250.0f) tax = 82.50f + (0.04f * (income - 3750.0f));
        else if (income <= 7000.0f) tax = 142.50f + (0.05f * (income - 5250.0f));
        else tax = 230.00f + (0.06f * (income - 7000.0f));
        printf("Tax: $%.2f", tax);
    }
}
