#include <stdio.h>
int main()
{
    /*  QUESTION.
        The side of a square is input through the keyboard. Write a program to
        calculate the perimeter of a square. Print the result on output screen.*/

    int side;
    printf("what is side of Square \n");
    scanf("%d", &side);
    printf("Perimeter of Square is : %d", 4 * side);

    return 0;
}