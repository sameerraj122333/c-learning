// Adds the numbers entered by the user.

#include<stdio.h>

int main (void)
{
    long input = 1, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter the integers (0 to terminate): ");
    while (input != 0)
    {
        scanf("%ld", &input);
        sum += input;
    }
    printf("The sum is: %ld\n", sum);

    return 0;
}
