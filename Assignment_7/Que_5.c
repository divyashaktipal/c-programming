#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to check whether a number is positive or negative.
        For example,if the user enters 8, it should print: Positive number.
    */

    int num;
    printf("Enter any integer \n");
    scanf("%d", &num);

    if (num >= 1)
    {
        printf("%d is positive number\n", num);
    }
    else if (num == 0)
    {
        printf("%d This is not negative nor positive\n", num);
    }
    else if (num < 1)
    {
        printf("%d is negative number\n", num);
    }
    return 0;
}