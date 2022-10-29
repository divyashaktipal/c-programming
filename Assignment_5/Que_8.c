#include <stdio.h>
int main()
{
    /* QUESTION NO.8
        Enter the three sides of a triangle. Find the sum of three Sides
        of the triangle. Print the result on the screen.*/

    int side_1, side_2, side_3;
    printf("Enter first side of Triangle\n");
    scanf("%d", &side_1);
    printf("Enter second side of Triangle\n");
    scanf("%d", &side_2);
    printf("Enter third side of Triangle\n");
    scanf("%d", &side_3);
    printf("The sum of three side of Triangle is: %d", side_1 + side_2 + side_3);
   
    return 0;
}