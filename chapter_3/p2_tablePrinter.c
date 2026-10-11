// Prints data taken from user in table-like format.

#include<stdio.h>

int main (void)
{
    int item, day, month, year;
    float price;

    printf("Enter the item number: ");
    scanf("%d", &item);
    printf("Enter the unit price: ");
    scanf("%f", &price);
    printf("Enter the purchase date in the format dd/mm/yyyy: ");
    scanf("%d / %d / %d", &day, &month, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$%6.2f\t%.2d/%.2d/%.4d\n", item, price, day, month, year);

    return 0;
}
