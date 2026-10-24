// Checks whether a number id prime or not.

#include<stdio.h>

int main (void)
{
  int input, d;

  printf("Enter a number: ");
  scanf("%d", &input);

  for (d = 2; d < input; d++)
  {
    if (input % d == 0) break;
  };
  if (d < input) printf("%d is divisible by %d", input, d);
  else printf("The number is prime.");

  return 0;
}

