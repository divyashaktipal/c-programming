// Date - 28/10/2022
// Written by - Divyashakti_Pal
// Purpose - To calculate square of given number in reverse order

// QUESTION.
//     Write a program to calculate squre of a number in reverse order.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter any integer \n");
    scanf("%d", &num);
    if (num == 1)
        printf("1");

    for (num >= 1; num = num - 1;)
    {
        int sq = num * num;
        printf("%d ,", sq);
        sq--;
    }

    return 0;
}