#include <stdio.h>
int main()
{
    /*
    QUESTION.
       Ask the user to enter a value between 1 to 100. Write a program to print SUCCESS
       if the user enters any number between 50 to 100. Otherwise, it should print FAIL.
    */

    int inputNumber;
    printf("Enter any integer between 1 - 100 \n");
    scanf("%d",&inputNumber);
    if (inputNumber >= 50 && inputNumber <= 100)
    {
        printf("You are SUCESS !!\n");
    }
    else
    {
        printf("You are FAIL !!\n");
    }
}