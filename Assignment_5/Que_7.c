#include <stdio.h>
int main()
{
    /* QUESTION NO.7
        The radius of a circle is input through the keyboard. Write a program
        to calculate the circumferenceof a circle. Print the result on output screen.*/

    float radius, pi;
    pi = 3.14;
    printf("Enter radius of Circle \n");
    scanf("%f", &radius);
    printf("Circumference of Circle is : %f", radius * 2 * pi);
   
    return 0;
}