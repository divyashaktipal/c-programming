// Date - 28/10/2022
// Written by - Divyashakti_Pal
// Purpose - To calculate factorial of given number

// QUESTION.
//     Write a program to calculate factorial of a number.

#include <stdio.h>
int main()
{
    int fact = 1, n, i;
    printf("Enter any inter ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial is %d", fact);

    return 0;
}