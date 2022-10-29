#include <stdio.h>
int main()
{

    /*
    QUESTION.
    Enter two numbers from the keyboard. Write a program to print the value of larger
    number. [Your program should output only one number which is greater among two. For
    example, if user enters 3 and 9, output should be: Larger number is 9]
    */

    int num1, num2;
    printf("Enter first number \n");
    scanf("%d", &num1);
    printf("Enter Second number \n");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is larger than %d \n", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("%d is larger number than %d\n", num2, num1);
    }
    else
    {
        printf("Both are equal number \n");
    }

    return 0;
}