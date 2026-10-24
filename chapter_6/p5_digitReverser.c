// Reverses the digits of a number entered by the user.

#include<stdio.h>

int main (void)
{
  int input, digit;

  printf("Enter a number:");
  scanf("%d", &input);

  printf("Your number revered is ");
  do
  {
    digit = input % 10;
    printf("%d", digit);
    input /= 10;
  } while (input > 0);

  return 0;
}
