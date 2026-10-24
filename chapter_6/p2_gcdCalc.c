// Calculates the GCD (Greatest Common Divisor) of two numbers.

#include<stdio.h>

int main (void)
{
  int n, m, temp;

  printf("Enter two intergers: ");
  scanf("%d %d", &n, &m);

  while(n > 0)
  {
    temp = m % n;
    m = n;
    n = temp;
  }
  printf("The greatest common divisor of the two numbers is %d.", m);

  return 0;
}
