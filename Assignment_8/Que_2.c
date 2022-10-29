#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to take marks of 5 subjects from the user.
        Assume marks are given out of 100 and passing marks is 33.
        Now display whether the candidate passed the examination or failed.
    */

    int math, english, science, socialScience, sanskrit, a, percentage;
    printf("enter your MATH marks :\n");
    printf("enter your ENGLISH marks :\n");
    printf("enter your SCIENCE marks :\n");
    printf("enter your SOCIALSCIENCE marks :\n");
    printf("enter your SANSKRIT marks :\n");
    scanf("%d%d%d%d%d", &math, &english, &science, &socialScience, &sanskrit);

    a = (math + english + science + socialScience + sanskrit) / 5;

    if (a >= 75)
    {
        printf("you have got first division \n");
    }
    else if (percentage < 75 && percentage >= 50)
    {
        printf("you have got second division \n");
    }
    else if (percentage < 50 && percentage >= 30)
    {
        printf("you have got third division\n");
    }
    else
    {
        printf("you are fail");
    }
    return 0;
}