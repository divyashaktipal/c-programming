#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to swap values of two int variables without using third variable.
        For example if a=5 and b=10, then output should be: a= 10 and b=5.
    */

    int values, values1;
    printf("Enter any two values and i swap the value \n");
    scanf("%d %d", &values, &values1);
    printf("Before swap the values is : %d %d \n", values, values1);
    printf("After swap the values is : %d %d \n", values1, values);

    return 0;
}