// Reads the date in the format dd/mm/yyyy and converts to yyyymmdd.

#include<stdio.h>

int main(void)
{
    int year = 0, month = 0, day = 0;

    printf("Enter the date in the format dd/mm/yyyy: ");
    scanf("%d / %d / %d", &day, &month, &year);

    printf("Your formatted date is: %.4d%.2d%.2d", year, month, day);
    
    return 0;
}
