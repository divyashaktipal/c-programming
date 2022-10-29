#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to check whether a given number is divisible by 3 and d12ivisible by 2.
    */

    int div;
    printf("Enter any number and i calculate it is divisible by 3 or 2 \n");
    scanf("%d", &div);

if (div % 2 == 0)
    {
        printf("given number is divisible by 2 ");
    if (div % 3 == 0 && div % 2 == 0)
        {
            printf("And also divisible by 3 \n");
        }
    }
    else if (div % 3 == 0)
    {
        printf("it is divisible by 3");
    }
    else
    {
        printf("given number is not divisible by 2 and 3");
    }
    return 0;
}