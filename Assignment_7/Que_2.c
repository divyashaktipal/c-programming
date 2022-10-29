#include <stdio.h>
int main()
{
    /* 
    QUESTION.
       Two numbers are input through the keyboard. Also, ask the user to enter a choice.
       Write a program to do the following:
       I. Print sum of two numbers if user enters choice as 1.
       II. Print difference of two numbers if user enters choice as 2.
       III. Print product of two numbers if user enters choice as 3.
       IV. Print quotient if user enters choice as 4.
       V. Print NOOPERATION if user enters choice as 0.
    */

    int a, b ,n;
    printf("Enter your first number \n");
    scanf("%d", &a);
    printf("Enter your second number \n");
    scanf("%d", &b);
    printf("enter n = \n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d", a + b);
    }
    else if (n == 2)
    {
        printf("%d", a - b);
    }
    else if (n == 3)
    {
        printf("%d", a * b);
    }
    else if (n == 4)
    {
        printf("%d", a / b);
    }
    else if (n <= 5 && n == 0)
    {
        printf("NO OERATION\n");
    }
    return 0;
}