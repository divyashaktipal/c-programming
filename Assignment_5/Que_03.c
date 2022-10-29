#include <stdio.h>
int main()
{
    /*
    QUESTION.
    The length and breadth of a rectangle is input through the keyboard.
    Write a program to calculate the perimeter of a rectangle. Print the result on output screen.
    */

    int l, b;
    printf("Enter length of Rectangle \n");
    scanf("%d", &l);
    printf("Enter breadth of Rectangle \n");
    scanf("%d", &b);
    printf("Perimeter of Rectangle is : %d", 2 * (l + b));

    return 0;
}