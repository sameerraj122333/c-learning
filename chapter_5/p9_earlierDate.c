// Prints the earlier date of the two dates entered by the user.

#include<stdio.h>

int main (void)
{
    int day1, day2, month1, month2, year1, year2;

    printf("Enter first date (in mm/dd/yy format): ");
    scanf("%d / %d / %d", &month1, &day1, &year1);
    printf("Enter second date (in mm/dd/yy format): ");
    scanf("%d / %d / %d", &month2, &day2, &year2);

    if (year1 > year2) printf("%d/%d/%d is earlier than %d/%d/%d", month2, day2, year2, month1, day1, year1);
    else if (year1 < year2) printf("%d/%d/%d is earlier than %d/%d/%d", month1, day1, year1, month2, day2, year2);
    else if (month1 > month2) printf("%d/%d/%d is earlier than %d/%d/%d", month2, day2, year2, month1, day1, year1);
    else if (month1 < month2) printf("%d/%d/%d is earlier than %d/%d/%d", month1, day1, year1, month2, day2, year2);
    else if (day1 > day2) printf("%d/%d/%d is earlier than %d/%d/%d", month2, day2, year2, month1, day1, year1);
    else if (day1 < day2) printf("%d/%d/%d is earlier than %d/%d/%d", month1, day1, year1, month2, day2, year2);
    else printf("Both dates are same.");

    return 0;
}
