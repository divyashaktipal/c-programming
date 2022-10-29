#include <stdio.h>
int main()
{
    /*
    QUESTION.
       Write a program to print digits of one’s place and tenth’s place of a given number
       [For example, number is 2345, then digit at one’s place is 5 and digit at 10th place is 4].
       Now check whether the digits at both place are equal or not.
    */

    int A;
    printf("enter interger \n");
    scanf("%d", &A);

    printf("oneth place is %d \n", A % 10);
    printf("tenth place is %d \n", (A % 100 - A % 10) / 10);

    return 0;
}