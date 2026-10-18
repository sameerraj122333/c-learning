// Prints city name corresponding to an area code.

#include<stdio.h>

int main (void)
{
    int area_code;
    printf("Enter the area code: ");
    scanf("%d", &area_code);
    switch (area_code)
    {
        case 229: 
            printf("City Name: Albany"); break;
        case 404: case 470: case 678: case 770: 
            printf("City Name: Atlanta"); break;
        case 706: case 762: 
            printf("City Name: Columbus"); break;
        case 478: 
            printf("City Name: Macon"); break;
        case 912: 
            printf("City Name: Savannah"); break;
        default: 
            printf("Area code not recognised."); break;
    }
    printf("\n");
}
