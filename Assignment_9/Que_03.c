#include <stdio.h>
int main()
{
    /*
    QUESTION.
        WAP to check whether a number is even or odd. If the number is even then check whether number is divisible by 3
        and also by 2 or not. If the number is odd then check whether the number is divisible by 5 or not. Display messages accordingly.
    */

    int div;
    printf("Enter any number and i calculate is it divisible by 3 or 2 \n");
    scanf("%d", &div);
    if (div % 2 == 0)
    {
        printf("EVEN NUMBER \n");

        if (div % 2 == 0)
        {
            printf("%d is divisible by 2 ", div);
        }
        else if (div % 3 == 0)
        {
            printf("and also divisible by 3 \n");
        }
    }
    else
    {
        printf("%d is odd number ", div);
        if (div % 5 == 0)
        {
            printf("it is divisible by 5");
        }
    }
    return 0;
}