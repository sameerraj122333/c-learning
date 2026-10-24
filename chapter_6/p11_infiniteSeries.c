// Calculates the value of mathematical constant e using infinite series.

#include<stdio.h>

int main (void)
{
  float e = 1;
  int n, k;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    k = i;
    for (int j = 1; j < i; j++)
    {
      k *= j;
    }
    e += 1.00f/k;
  }
  printf("The value of constant e is %f", e);

  return 0;
}
