// Tells the wind condition based on wind force using Beaufort scale.
/*
Beaufort Scale:
Speed (knots)   Description
Less than 1     Calm
1–3             Light air
4–27            Breeze
28–47           Gale
48–63           Storm
Above 63        Hurricane
*/

#include<stdio.h>

int main (void)
{
    float windForce;

    printf("Enter the wind speed (in knots): ");
    scanf("%f", &windForce);

    if (windForce < 0.0f) 
        printf("Invalid wind speed.\n");
    else 
    {   
        printf("Wind Condition: ");
        if (windForce < 1.0f) printf("Calm\n");
        else if (windForce <= 3.0f) printf("Light Air\n");
        else if (windForce <= 27.0f) printf("Breeze\n");
        else if (windForce <= 47.0f) printf("Gale\n");
        else if (windForce <= 63.0f) printf("Storm\n");
        else printf("Hurricane\n");
    }
    return 0;
}
