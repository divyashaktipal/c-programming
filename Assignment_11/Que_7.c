// Date - 23/10/2022
// Developed by - Divyashakti Pal

/*
QUESTION.
    Write a program to make the last digit of a number stored in
    a variable as zero. (Example - if num=5678 then make it
    num=5670)
*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter any integer \n");
    scanf("%d", &a);
    a = a / 10 * 10;
    printf("%d", a);

    return 0;
}