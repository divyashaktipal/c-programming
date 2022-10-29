#include <stdio.h>
int main()
{
    /*
    QUETION.
        Write a program to check whether a given number is positive, negative or zero.
        If the number is positive, check the number is divisible by 10 or not.
    */

    int num;
    printf("Enter a number between \n");
    scanf("%d", &num);
    if (num >= 1)
    {
        printf("%d is a positive number\n", num);

        if (num >= 1 && num % 10 == 0)
        {
            printf("this number is divisible by %d", num / 10);
        }
        else
        {
            printf("this number is not divisible by 10");
        }
    }
    else if (num == 0)
    {
        printf("\"THIS NUMBER IS ZERO\". \n");
    }
    else if (num < 1)
    {
        printf("%d is a negative number\n", num);
    }
    return 0;
}