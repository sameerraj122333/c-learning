// Calculates the check digit of Universal Product Code.

#include<stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, checkDigit;

    printf("Enter the UPC: ");
    scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", 
        &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

    checkDigit = 9 - ((((3 * (a + c + e + g + i + k)) + (b + d + f + h + j)) - 1) % 10);

    if (checkDigit == l) printf("VALID");
    else printf("INVALID");

    return 0;
}
