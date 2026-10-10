// Takes the input in various formats and prints them.

#include<stdio.h>

int main(void)
{
    int i, j;
    float x, y;
    
    printf("Enter two integers and two floating-point numbers:\n");

    scanf("%d%d%f%f", &i, &j, &x, &y);
    
    printf("You entered: |%d|%d|%f|%f}", i, j, x, y);

    return 0;
}
