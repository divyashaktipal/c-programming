#include <stdio.h>
int main()
{
    /*
    QUESTION.
        WAP to find the greatest among the two given numbers.
        Also, check whether the greatest number is between 500-
        1000 or not. If yes, then print the value of entered number.
    */

    int a, b;
    printf("enter any two number \n");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is greater than %d", a, b);
    }
    else if (b > a)
    {
        printf("%d is greater than %d", b, a);
        if (a >= 500 && b <= 1000)
        {
            printf("entered number is lies between 500 - 1000 ");
        }
    }
    return 0;
}