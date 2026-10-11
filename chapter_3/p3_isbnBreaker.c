// Breaks the modern ISBN number into its various components.

#include<stdio.h>

int main (void)
{
    int gs1, groupID, publisherCode, itemNumber, checkDigit;

    printf("Enter the ISBN: ");
    scanf("%d - %d - %d - %d - %d", &gs1, &groupID, &publisherCode, &itemNumber, &checkDigit);

    printf("GS1 Prefix: %d\n", gs1);
    printf("Group Identifier: %d\n", groupID);
    printf("Publisher Code: %d\n", publisherCode);\
    printf("Item Number: %d\n", itemNumber);
    printf("check Digit: %d\n", checkDigit);

    return 0;
}
