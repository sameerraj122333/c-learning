// Prompts the user to enter numbers continuously and then prints the largest among them.

#include<stdio.h>

int main (void)
{
  float max = 0, input;

  printf("**** Largest Number Finder ****\n");

  for (;;)
  {
    printf("Enter a number: ");
    scanf("%f", &input);
    if (input <= 0) break;
    if (input > max) max = input;
  }
  printf("The larhest number was: %.2f", max);
}
