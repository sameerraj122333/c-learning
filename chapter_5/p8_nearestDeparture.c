// Finds nearest flight departure time to the time entered by the user.

#include<stdio.h>

int main (void)
{
    float hours, minutes, inputTime;

    printf("Enter time (in 24-hour format): ");
    scanf("%f : %f", &hours, &minutes);

    inputTime = (hours * 60.0) + minutes;

    if (inputTime < 480.0) 
    {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    }
    else if (inputTime < 583.0)
    {
        if (inputTime < (583.0 + 480.0) / 2.0) printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
        else printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (inputTime < 679.0)
    {
        if (inputTime < (679.0 + 583.0) / 2.0) printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
        else printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (inputTime < 767.0)
    {
        if (inputTime < (767.0 + 679.0) / 2.0) printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
        else printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (inputTime < 840.0)
    {
        if (inputTime < (840.0 + 767.0) / 2.0) printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
        else printf("Closest departure time is 2:00 p.m., arriving at 11:52 p.m.\n");
    }
    else if (inputTime < 945.0)
    {
        if (inputTime < (945.0 + 840.0) / 2.0) printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
        else printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (inputTime < 1140.0)
    {
        if (inputTime < (1140.0 + 945.0) / 2.0) printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
        else printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else if (inputTime < 1305.0)
    {
        if (inputTime < (1305.0 + 1140.0) / 2.0) printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
        else printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }
    else
    {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}
