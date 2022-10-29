#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to check whether an integer is odd or even.
    */

    int integer;
    printf("Enter any integer \n");
    scanf("%d", &integer);

    if (integer % 2 == 0)
        printf("%d is a even number \n", integer);

    else
        printf("%d is a odd number", integer);

    return 0;
}