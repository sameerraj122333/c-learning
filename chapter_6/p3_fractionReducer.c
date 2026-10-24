// Calculates the reduced form of fractions entered by the user.

#include<stdio.h>

int main (void)
{
  int n, m, temp, a, b;

  printf("Enter a fraction: ");
  scanf("%d / %d", &n, &m);

  a = n;
  b = m;

  while (n > 0)
  {
    temp = m % n;
    m = n;
    n = temp;
  }

  printf("The reduced form of the fraction is %d/%d", a/m, b/m);

  return 0;
}
