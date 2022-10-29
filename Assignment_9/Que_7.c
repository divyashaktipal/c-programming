#include <stdio.h>
int main()
{
    /* QUESTION.
       Write a c program to check whether a triangle is Equilateral, Isosceles or Scalene
    */

    int s, t, e;
    printf("enter side,side1,side2 \n");
    scanf("%d %d %d", &s, &t, &e);

    if (s == t && t == e)
    {
        printf("this is equilateral triangle \n");
    }
    else if (s == t || t == e || e == s)
    {
        printf("this is isosceles triangle \n");
    }
    else
    {
        printf("this is scalene triangle \n");
    }

    return 0;
}