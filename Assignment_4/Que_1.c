#include <stdio.h>
int main()
{
    /* 
    QUESTION.
    Write a simple C program to add two integer values and
    print the output
    */

    int firstNum, secondNum;
    printf("what is your first number\n");
    scanf("%d", &firstNum);
    printf("\n");
    printf("what is your second number\n");
    scanf("%d", &secondNum);
    printf("\n");
    printf("total value is %d", firstNum + secondNum);
    printf("\n");
    return 0;
}