
// Date - 22/10/2022
// Written by - Divyashakti_Pal
// Purpose - To print first 10 even natural numbers.

// QUESTION.
//       WAP to print first 10 even natural numbers.

#include <stdio.h>
int main()
{
    int i;
    for (i = 2; i <= 20; i = i + 2)
    {
        printf("%d ,", i);
    }

    return 0;
}