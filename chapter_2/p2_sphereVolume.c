// Calculates the volume of a sphere with radius 10 meters.

#include<stdio.H>
#define RADIUS 10
#define COEFFICIENT 4.0f / 3.0f
#define PIE 3.14f

int main (void)
{
    float volume;
    volume = COEFFICIENT * PIE * RADIUS * RADIUS * RADIUS ;
    printf("The volume of the sphere having radius 10 meters is %.2f cubic meters.\n", volume);
    return 0;
}
