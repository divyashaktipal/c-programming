#include <stdio.h>
int main()
{

    /*
    QUESTION.
    Write a program which takes the month number as an input and display number of days in that month.
    */

    int month;

    printf("ENTER MONTH IN VALUE & I PRINT MONTH'S NAME AND HOW MANY DAYS IN IT \n");
    scanf("%d", &month);

    if (month == 1)
    {
        printf("JANUARY (31 DAYS) \n");
    }
    else if (month == 2)
    {
        printf("FEBRUARY (28 DAYS WHEN LEAP YEAR IT'S 29)\n");
    }
    else if (month == 3)
    {
        printf("MARCH (31 DAYS)\n");
    }
    else if (month == 4)
    {
        printf("APRIL (30 DAYS)\n");
    }
    else if (month == 5)
    {
        printf("MAY (31 DAYS)\n");
    }
    else if (month == 6)
    {
        printf("JUNE (30 DAYS)\n");
    }
    else if (month == 7)
    {
        printf("JULY (31 DAYS)\n");
    }
    else if (month == 8)
    {
        printf("AUGUST (31 DAYS) \n");
    }
    else if (month == 9)
    {
        printf("SEPTEMBER (30 DAYS) \n");
    }
    else if (month == 10)
    {
        printf("OCTOBER (31 DAYS) \n");
    }
    else if (month == 11)
    {
        printf("NOVEMBER (30 DAYS) \n");
    }
    else if (month == 12)
    {
        printf("DECEMBER (31 DAYS) \n");
    }
    else
    {
        printf("This is not valid number for month !!");
    }
    return 0;
}