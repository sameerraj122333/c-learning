// Calculates the sum of the numbers entered by the user.

#include<stdio.h>

int main (void)
{
  int input, sum = 0;

  printf("Enter 10 numbers: ");

  for (int n = 0; n < 10;)
  {
    scanf("%d", &input);
    if (input == 0) continue;
    sum += input;
    n++;
  }
  printf("The sum of the numbers is: %d", sum);
  return 0;
}

