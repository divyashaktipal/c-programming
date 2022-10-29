#include <stdio.h>
int main()
{
    /*
    Question.
    Write a program to find the grestest among the three given numbers.
    */
   
    int first, second, third;

    printf("Enter your first number,second number and third number \n");
    scanf("%d %d %d", &first, &second, &third);

    if (first > second && first > third)
    {
        printf("First is greater than second & third");
    }
    else if (second > first && second > third)
    {
        printf("second is greater than first and third");
    }
    else if (third > first && third > second)
    {
        printf("third is greater than first and second");
    }
    else
    {
        printf("ALL ARE EQUAL or ANY TWO NUMBER ARE EQUAL");
    }

    return 0;
}