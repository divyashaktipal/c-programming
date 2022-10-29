#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to take marks of 5 subjects from the user.
        Assume marks are given out of 100 and passing marks is 33.
        Now display whether the candidate passed the examination
        or failed. Print student’s total marks only if the student has
        passed the examination, otherwise not.
    */

    int math, physics, chemistry, english, hindi;
    printf("enter your 12th marks subjectwise \n");
    printf("enter your maths marks \n");
    scanf("%d", &math);
    printf("enter your physics marks \n");
    scanf("%d", &physics);
    printf("enter your chemistry marks \n");
    scanf("%d", &chemistry);
    printf("enter your english marks \n");
    scanf("%d", &english);
    printf("enter your hindi marks \n");
    scanf("%d", &hindi);

    int total = math + physics + chemistry + english + hindi;
    printf("your total marks is : %d \n", total);

    int marks = ((total)*100) / 500;
    printf("you got %d persent \n", marks);

    if (marks >= 33)
    {
        printf("You have passed the Examination \n");
    }
    else if (marks < 33)
    {
        printf("you have failed \n");
    }

    return 0;
}