#include <stdio.h>
int main()
{
    /*
    QUESTION.
    WAP to print ‘10’ natural numbers in reverse order.
    */

    int a, i;
    printf("Enter any integer \n");
    scanf("%d", &a);
    printf("List of Natural Numbers from %d to 1 are \n", a);

    for (i = a; i >= 1; i--)
    {
        printf("%d", a);
    }

    return 0;
}