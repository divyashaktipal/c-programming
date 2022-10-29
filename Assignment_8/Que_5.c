#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to check whether a given number is positive, negative or zero.
    */

    int num;
    printf("Enter aNY INTEGER \n");
    scanf("%d", &num);
    if (num >= 1)
    {
        printf("positive number\n");
    }
    else if (num == 0)
    {
        printf("This is ZERO \n");
    }

    else if (num < 1)
    {
        printf("negative number\n");
    }

    return 0;
}