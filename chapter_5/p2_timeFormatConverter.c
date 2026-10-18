// Converts time in 24-hour format to 12-hour format.

#include<stdio.H>

int main (void)
{
    int hour, minute;

    printf("Enter time in 24-hour format (hh:mm): ");
    scanf("%d : %d", &hour, &minute);

    if (hour > 12) printf("Time in 12-hour format is: %d:%.2d PM", hour - 12, minute);
    else if(hour == 12) printf("Time in 12-hour format is: %d:%.2d PM", hour, minute);
    else printf("The time in 12-hour format isL %d:%.2d AM", hour, minute);

    return 0;
}
