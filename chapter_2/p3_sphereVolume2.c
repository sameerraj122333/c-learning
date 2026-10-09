// Calculates the volume of a sphere with radius of sphere taken as input from the user.

#include<stdio.H>
#define COEFFICIENT 4.0f / 3.0f
#define PIE 3.14f

int main (void)
{
    float volume, radius;

    printf("Enter the radius of the sphere (in meters): ");
    scanf("%f", &radius);

    volume = COEFFICIENT * PIE * radius * radius * radius ;

    printf("The volume of the sphere having radius %.2f meters is %.2f cubic meters.\n", radius, volume);

    return 0;
}
