#include <stdio.h>
int main()
{
    /* QUESTION.
        Write a program to print N natural numbers. For example,input 6, it
        should print 1 2 3 4 5 6. Create a function to print these numbers.
    */

    int n, i;
    printf("Enter any number: \n");
    scanf("%d", &n);
    printf("First %d natural numbers are:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}