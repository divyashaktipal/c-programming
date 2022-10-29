#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to print unit digit of a given number [Hint: Use of modulus operator]
    */
    int a;
    printf("Enter any integer \n");
    scanf("%d", &a);
    printf("unit digit is %d",a%10);
    return 0;
}