#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to check whether a year is a leap year or not.
    */

    int year;
    printf("CHECK YEAR IS LEAP YEAR OR NOT \n\n");
    printf("ENTER 4 DIGIT OF YEAR \n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a leap year \n", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}