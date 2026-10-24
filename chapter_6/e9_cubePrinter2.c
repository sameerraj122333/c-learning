// Continuously prints the cube of the entered number.

#include<stdio.h>

int main (void)
{
  for (int i;;)
  {
    printf("Enter a number (0 to stop): ");
    scanf("%d", &i);
    if (i == 0) goto done;
    printf("%d cubed is %d\n", i, i * i * i);
  }
  done:
  return 0;
}

