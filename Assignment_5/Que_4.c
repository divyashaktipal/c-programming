#include <stdio.h>
int main()
{
    /*
     QUESTION.
    The side of a square is input through the keyboard. Write a program to
    calculate the area of a square.Print the area on output screen.
     */

    int side;
    printf("Enter side of Square\n");
    scanf("%d", &side);
    printf("Area of Square is : %d", side * side);

    return 0;
}