// Displays grade based on the numerical grade.

#include<stdio.h>

int main (void)
{
    int numGrade, tensDigit;

    printf("Enter the numerical grade: ");
    scanf("%d", &numGrade);

    tensDigit = numGrade / 10;
    if (numGrade > 100 || numGrade < 0) printf("Invalid numerical grade.");
    else switch (tensDigit)
    {
        case 10: case 9: printf("Grade: A\n"); break;
        case 8: printf("Grade: B\n"); break;
        case 7: printf("Grade: C\n"); break;
        case 6: printf("Grade:D\n"); break;
        case 5: case 4: case 3: case 2: case 1: case 0: printf("Grade: F\n"); break;
    }

    return 0;
}
