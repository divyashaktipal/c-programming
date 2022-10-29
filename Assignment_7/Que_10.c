#include <stdio.h>
int main()
{

    /*
    QUESTION.
       Write a program which takes the length of the sides of a triangle
       as an input.Display whether the triangle is valid or not.
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
}