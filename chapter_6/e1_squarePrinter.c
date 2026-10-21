// Prints the square of the numbers starting from one to the number entered by the user.

#include<stdio.h>

int main (void)
{
    int input = 0, i = 1;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &input);
    
    if (input < 0) printf("Number of entries cannot be negative.\n");
    else 
    {
        printf("Number\tSquare\n");
        while (i <= input)
        {
            printf("%d\t%d\n", i, (i * i));
            i++;
        }
    }
    return 0;
}
