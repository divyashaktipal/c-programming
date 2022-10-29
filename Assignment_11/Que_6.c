// Date_20/10/2022
// Written by_Divyashakti pal
// Purpose - to calculate factorial for a given number

/* QUESTION.
    WRITE A PROGRAM TO CALCULATE FACTORIAL OF A NUMBER.
*/

#include <stdio.h>
int main()
{

    int a, i, fact = 1;
    printf("enter any integer \n");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("Error! Factorial of a negative num. doesn't exists \n");
    }
    else
    {
        for (i = 1; i <= a; ++i)
            ;
        {
            fact *= i;
        }
        printf("Factorial of %d = %d", a, fact);
    }
    return 0;
}