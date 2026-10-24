
// Prints the earlier date of the two dates entered by the user.

#include<stdio.h>

int main (void)
{
  int day1, day2, month1, month2, year1, year2;

  printf("Ehis program finds the earlest date from a set of dates.\n");
  printf("Enter 0/0/0 to stop entering dates.\n");
  
  day2 = 99; month2 = 99; year2 = 99;

  for (;;)
  {
    printf("Enter date (in mm/dd/yy format): ");
    scanf("%d / %d / %d", &month1, &day1, &year1);
    if (day1 == 0 && month1 == 0 && year1 == 0) break;
    if (year2 > year1)
    {
      day2 = day1;
      month2 = month1;
      year2 = year1;
    }
    else if (year2 == year1 && month2 > month1)
    {
      day2 = day1;
      month2 = month1;
      year2 = year1;
    }
    else if (year2 == year1 && month2 == month1 && day2 > day1)
    {
      day2 = day1;
      month2 = month1;
      year2 = year1;
    }
  }

  if (day2 == 99 && month2 == 99 && year2 == 99) return 0;
  printf("Earlier date is: %d/%d/%.2d", month2, day2, year2);
  return 0;
}
