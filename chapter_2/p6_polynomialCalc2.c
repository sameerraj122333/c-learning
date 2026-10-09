// Calculates the value of a polynomial using Horner's rule whose variable value is taken from user.

#include<stdio.h>

int main (void)
{
    float x, y;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    y = ((((( 3 * x ) + 2 ) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6 ;

    printf("The value of the polynolal 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 using Horner's rule is: %.2f\n", y); 
}
