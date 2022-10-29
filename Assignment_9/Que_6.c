#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to check whether a triangle is valid or not if sides are given.
    */

        int side1, side2, side3;

    printf("Enter first side of triangle: \n");
    scanf("%d", &side1);
    printf("Enter second side of Triangle: \n");
    scanf("%d", &side2);
    printf("Enter third side of Triangle: \n");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral triangle.");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("Isosceles triangle.");
    }
    else
    {
        printf("Scalene triangle.");
    }
    return 0;
}