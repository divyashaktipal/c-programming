#include <stdio.h>
int main()
{

    /* QUESTION NO.1
    Write a program to do the following:
    I. Calculate area of a rectangle
    II. Calculate perimeter of a rectangle
    III. Calculate area of a square
    IV. Calculate perimeter of a square
    V. Calculate area of a circle
    VI. Calculate circumference of a circle
    VII. Calculate sum of sides of a triangle.
    */

    int lenght, breadth, side, side_, side_1, side_2;
    float radius, pi;
    pi = 3.14;
    printf("enter lenght=\n");
    printf("enter breadth=\n");
    printf("enter side=\n");
    printf("enter radius=\n");
    printf("enter side_=\n");
    printf("enter side_1=\n");
    printf("enter side_2=\n");

    scanf("%d", &lenght);
    scanf("%d", &breadth);
    scanf("%d", &side);
    scanf("%f", &radius);
    scanf("%d", &side_);
    scanf("%d", &side_1);
    scanf("%d", &side_2);

    printf("area of rectangle is %d", lenght * breadth);
    printf("\n");
    printf("area of square is %d", side * side);
    printf("\n");
    printf("area of circle is %f", pi * radius * radius);
    printf("\n\n");

    printf("perimeter of rectangle is %d", 2 * lenght + 2 * breadth);
    printf("\n");
    printf("perimeter of square is %d", 4 * side);
    printf("\n");
    printf("circumference of circle is %f", 2 * pi * radius);
    printf("\n");
    printf("Total sum of side of Triangle is : %d", side_ + side_1 + side_2);

    return 0;
}