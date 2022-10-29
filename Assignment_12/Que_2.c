
// Date - 22/10/2022
// Written by - Divyashakti_Pal
// Purpose - To print 'N' natural numbers using loop method.

/*  QUESTION.
    WAP to print N natural numbers. For ex if user enters N= 5,
    then it should print 1 2 3 4 5.
*/

#include <stdio.h>
int main()
{

    int Num, i;
    printf("enter integer \n");
    scanf("%d", &Num);
    if (Num == 1)
        printf("1");

    for (Num >= 1; Num = Num - 1;)
    {
        printf("%d,", Num);
    }
    return 0;
}