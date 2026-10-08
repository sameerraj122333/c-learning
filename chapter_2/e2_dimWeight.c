// Calculates the dimensional weight of 12" x 10" x 8" box.

#include<stdio.h>

int main ()
{
    int length = 12, width = 10, height = 8;
    int volume, weight;

    volume = height * length * width;
    weight = (volume + 165) / 166;
    
    printf("Dimensions: %dx%dx%d inches\n", length, width, height);
    printf("Volume: %d\n", volume);
    printf("Dimentional Weight: %d\n", weight);
    return 0;
}
