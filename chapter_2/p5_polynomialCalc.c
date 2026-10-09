// Calculates the value of a polynomial whose variable value is taken from user.

#include<stdio.h>

int main (void)
{
    float x5, x4, x3, x2, x, y;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    x5 = x * x * x * x * x;
    x4 = x * x * x * x;
    x3 = x * x * x;
    x2 = x * x;
    y = ( 3 * x5 ) + ( 2 * x4 ) - ( 5 * x3 ) - x2 + ( 7 * x ) - 6;

    printf("The value of the polynolal 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: %.2f\n", y); 
}
