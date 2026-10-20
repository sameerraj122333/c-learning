// Finds the biggest and smallest among 4 integers entered by the user.

#include<stdio.h>

int main(void)
{
    int a, b, c, d, min1, max1, min2, max2, min, max;

    printf("Enter 4 integers (separated by space): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        max1 = a;
        min1 = b;
    }
    else
    {
        max1 = b;
        min1 = a;
    }
    if (c > d)
    {
        max2 = c;
        min2 = d;
    }
    else 
    {
        max2 = d;
        min2 = c;
    }
    if (max1 > max2) max = max1;
    else max = max2;
    if (min1 < min2) min = min1;
    else min = min2;

    printf("Biggest number: %d\n", max);
    printf("Smallest number: %d\n", min);
    
    return 0;
}
