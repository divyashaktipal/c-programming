// Date- 23/10/2022
// created by - DIVYASHAKTI PAL
// Purpose - To print month's name & display number of days.

/* QUESTION.
    Write a program which takes the month number as an input and
    display number of days in that month.
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the month number\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Month's name = \"January\", Number of days = 31");
        break;
    case 2:
        printf("Month's name = \"February\", Number of days = 28");
        break;
    case 3:
        printf("Month's name = \"March\", Number of days = 31");
        break;
    case 4:
        printf("Month's name = \"April\", Number of days = 30");
        break;
    case 5:
        printf("Month's name = \"May\", Number of days = 31");
        break;
    case 6:
        printf("Month's name = \"June\", Number of days = 30");
        break;
    case 7:
        printf("Month's name = \"July\", Number of days = 31");
        break;
    case 8:
        printf("Month's name = \"August\", Number of days = 31");
        break;
    case 9:
        printf("Month's name = \"September\", Number of days = 30");
        break;
    case 10:
        printf("Month's name = \"October\", Number of days = 31");
        break;
    case 11:
        printf("Month's name = \"November\", Number of days = 30");
        break;
    case 12:
        printf("Month's name = \"December\", Number of days = 31");
        break;

        return 0;
    }
}