// Calculates the check digit of European Article Number.

#include<stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, checkDigit;

    printf("Enter the EAN (first 12 digits): ");
    scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", 
        &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

    checkDigit = 9 - ((((a + c + e + g + i + k) + (3 * (b + d + f + h + j + l))) - 1) % 10);

    printf("Check Digit: %d", checkDigit);

    return 0;
}
