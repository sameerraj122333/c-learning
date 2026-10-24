
// Calculates the value of mathematical constant e using infinite series.

#include<stdio.h>

int main (void)
{
  float e = 1, epsilon;
  int k;

  printf("Enter a small decimal number: ");
  scanf("%f", &epsilon);

  for (int i = 1;; i++)
  {
    k = i;
    for (int j = 1; j < i; j++) k *= j;
    float term = 1.00f / k;
    if (term < epsilon ) break;
    e += term;
  }
  printf("The value of constant e is %f\n", e);

  return 0;
}
