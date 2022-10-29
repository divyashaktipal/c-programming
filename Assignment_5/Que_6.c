#include <stdio.h>
int main()
{
    /* QUESTION.
        The radius of a circle is input through the keyboard. Write a program
        to calculate the area of a circle. Print the area on output screen.*/

    float pi, radius;
    pi = 3.14;
    printf("What is the radius of circle\n");
    scanf("%f", &radius);
    printf("Area of Circle is : %f", radius * pi * radius);

    return 0;
}