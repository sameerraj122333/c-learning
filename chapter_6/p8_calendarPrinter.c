// Prints a month calendar.

#include<stdio.h>

int main (void)
{
  int n, s, i;

  printf("Enter the number of days in the month: ");
  scanf("%d", &n);
  printf("Enter the starting day of the week (0=Sunday, 7=Saturday): ");
  scanf("%d", &s);

  int m = s;
  for (i = 1; i < s; i++) printf("\t");
  for (i = 1; i <= n; i++)
  {
    printf("%d\t", i);
    if (i == (m + s) - 1)
    {
      printf("\n");
      s += 7;
    }
  }
  return 0;
}
