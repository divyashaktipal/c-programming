#include <stdio.h>
int main()
{
    /* QUESTION.
        Write a program to do the following:
        I. To add two numbers
        II. To subtract two numbers
        III. To multiply two numbers
        IV. To divide two numbers.
    */

    int A, B, C, D, E, F;
    float G, H;

    printf("Enter any number \n");
        scanf("%d", &A);
    printf("Enter any number \n");
        scanf("%d", &B);

    printf("Total Sum of these number is : %d \n", A + B);
    printf("\n\n");

    printf("Enter any number \n");
        scanf("%d", &C);
    printf("Enter any number \n");
        scanf("%d", &D);

    printf("Total substraction of these number is : %d", C - D);
    printf("\n\n");

    printf("Enter any number \n");
        scanf("%d", &E);
    printf("Enter any number \n");
        scanf("%d", &F);

    printf("Multiplication of these number is : %d", E * F);
    printf("\n\n");

    printf("Enter any number \n");
        scanf("%d", &G);
    printf("Enter any number \n");
        scanf("%d", &H);

    printf("Division of these number is : %f", G / H);

    return 0;
}