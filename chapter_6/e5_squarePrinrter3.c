/* Prints a table of squares using an odd method */

#include <stdio.h>

int main(void)
{
	int i, n, odd, square;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	i = 1;
	odd = 3;
	printf("Number\tSquare\n");
	for (square = 1; i <= n; odd += 2) 
	{
		printf("%d\t%d\n", i, square);
		++i;
		square += odd;
	}
	
	return 0;
}
	