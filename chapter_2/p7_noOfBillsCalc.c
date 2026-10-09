// Calculates the number of $20, $10, $5, and $1 bills required to pay the total amount entered by the user.

#include<stdio.h>

int main (void)
{
    int amount, b20, b10, b5, b1;

    printf("Enter the amount (in dollars): ");
    scanf("%d", &amount);

    b20 = amount / 20 ;
    b10 = ( amount - ( b20 * 20 ) ) / 10 ;
    b5 = ( amount - ( b20 * 20 ) - ( b10 * 10 ) ) / 5 ;
    b1 = ( amount - ( b20 * 20 ) - ( b10 * 10 ) - ( b5 * 5 ) ) ; 

    printf("$20 bills required: %d\n", b20);
    printf("$10 bills required: %d\n", b10);
    printf("$5 bills required: %d\n", b5);
    printf("$1 bills required: %d\n", b1);

    return 0;
}
