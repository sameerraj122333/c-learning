// Ptints the squares of even numbers upto the number entered by the user.

#include<stdio.h>

int main (void)
{
  int input;

  printf("Enter a number: ");
  scanf("%d", &input);

  int n = 2;
  while ((n * n) <= input)
  {
    printf("%d\n", n * n);
    n += 2;
  }

  return 0;
}
