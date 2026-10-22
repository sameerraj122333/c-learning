// Prints the square of the numbers starting from one to the number entered by the user.

#include<stdio.h>

int main (void)
{
    int input = 0;
    
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &input);
    
    if (input < 0) printf("Number of entries cannot be negative.\n");
    else 
    {
        printf("Number\tSquare\n");
		for (int i = 1; i <= input ; i++)
			printf("%d\t%d\n", i, (i * i));
    }
    return 0;
}
