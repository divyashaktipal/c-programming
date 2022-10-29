
// Date - 22/10/2022
// Written by - Divyashakti_Pal
// Purpose - To print first 10 even natural number in reverse order using loop.

// QUESTION.
//       WAP to print first 10 even natural numbers in reverse order.

#include <stdio.h>
int main()
{
    int f;
    for (f = 20; f >= 2; f = f - 2)
    {
        printf("%d ,", f);
    }

    return 0;
}