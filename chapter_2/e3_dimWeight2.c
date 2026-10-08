/*
Computes the dimensional weight of a box whose dimensions are entered by the user.
*/

#include<stdio.h>
#define INCHES_PER_POUND 166

int main ()
{
    int length, width, height, volume, weight;

    printf("Enter the length of the box (in inches): ");
    scanf("%d", &length);
    printf("Enter the width of the box (in inches): ");
    scanf("%d", &width);
    printf("Enter the height of the box (in inches): ");
    scanf("%d", &height);

    volume = length * width * height;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume of the box is %d cubic inch.\n", volume);
    printf("Dimensional Weight of the box is %d pounds.\n", weight);
    return 0;
}
