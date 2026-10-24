
/* Prints a table of squares using an odd method */

#include <stdio.h>

int main(void)
{
        int i, n, odd, square;

        printf("This program prints a table of squares.\n");
        printf("Enter number of entries in table: ");
        scanf("%d", &n);

        odd = 3;
        printf("Number\tSquare\n");
        for (square = 1, i = 1; i <= n; odd += 2, i++)
        {
                printf("%d\t%d\n", i, square);
                square += odd;
        }

        return 0;
}
