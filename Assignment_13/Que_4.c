// Date -
// Created by - Divyashakti Pal
#include <stdio.h>
int main()
{
    /* QUESTION.
    Write a program which takes the day number of a week and
    displays a unique greeting message for the day.
    */
    int main()
    {
        int weekday;
        printf(" Please Enter the Day Number 1 to 7 (Consider 1= Monday, and 7 = Sunday) :  ");
        scanf("%d", &weekday);

        if (weekday == 1)
        {
            printf("\n greeting message for Monday");
        }
        else if (weekday == 2)
        {
            printf("\n greeting message for Tuesday");
        }
        else if (weekday == 3)
        {
            printf("\n greeting message for Wednesday");
        }
        else if (weekday == 4)
        {
            printf("\n Tgreeting message for Thursday");
        }
        else if (weekday == 5)
        {
            printf("\n greeting message for Friday");
        }
        else if (weekday == 6)
        {
            printf("\n greeting message for Saturday");
        }
        else if (weekday == 7)
        {
            printf("\n greeting message for Sunday");
        }
        else
            printf("\n Please enter Valid Number between 1 to 7");

        return 0;
    }