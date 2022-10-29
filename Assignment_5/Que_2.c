#include <stdio.h>
int main()
{

    /*
    QUESTION.
    The length and breadth of a rectangle is input through the keyboard.
    Write a program to calculate the area of a rectangle. Print the area on output screen
    */

    int length, breadth;
    printf("Enter length and breadth of Rectangle \n");
    scanf("%d", &length);
    scanf("%d", &breadth);
    printf("Area of Rectangle is : %d", length * breadth);

    return 0;
}