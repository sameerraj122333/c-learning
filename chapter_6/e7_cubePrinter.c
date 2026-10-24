// Continuously prints the cube of the entered number.

#include<stdio.h>

int main (void)
{
  for (int i;;)
  {
    printf("Enter a number (0 to stop): ");
    scanf("%d", &i);
    if (i == 0) break;
    printf("%d cubed is %d\n", i, i * i * i);
  }
  return 0;
}

