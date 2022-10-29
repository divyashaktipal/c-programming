#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a C program to enter week number and print day of week
    */

    int weekDay;
    printf("Enter week number and i will print day of week \n");
    scanf("%d", &weekDay);

    if (weekDay == 1)
    {
        printf("MONDAY \n");
    }
    else if (weekDay == 2)
    {
        printf("TUESDAY \n");
    }
    else if (weekDay == 3)
    {
        printf("WEDNESSDAY \n");
    }
    else if (weekDay == 4)
    {
        printf("THRUSDAY \n");
    }
    else if (weekDay == 5)
    {
        printf("FRIDAY \n");
    }
    else if (weekDay == 6)
    {
        printf("SATURDAY \n");
    }
    else if (weekDay == 7)
    {
        printf("SUNDAY \n");
    }
    else
    {
        printf("Please enter valid number between 1 to 7");
    }
    return 0;
}