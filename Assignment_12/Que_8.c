
// Date - 22/10/2022
// Written by - Divyashakti_Pal
// Purpose - To print first 10 odd natural numbers using loop method.

// QUESTION.
//      WAP to print first 10 odd natural numbers.

#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 21; i = i + 2)
    {
        printf("%d ,", i);
    }

    return 0;
}