// Takes the phone number as user input in one format and converts it to another format.

#include<stdio.h>

int main (void)
{
    int a, b, c;

    printf("Enter the phone number in the following format (XXX) XXX-XXX : ");
    scanf("( %d ) %d - %d", &a, &b, &c);

    printf("You formatted phone number is: %d.%d.%d\n", a, b, c);

    return 0;
}
