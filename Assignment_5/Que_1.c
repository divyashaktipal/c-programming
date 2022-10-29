#include <stdio.h>
int main()
{

    /*
    QUESTION.
    Aman’s basic salary is input through the keyboard. His dearness allowance is 50%
    of basic salary,and house rent allowance is 20% of basic salary. Write a program to
    calculate his gross (total) salary. Print the salary on screen.
    */

    int salary;
    int grossSalary;
    printf("Enter salary of Aman\n");
    scanf("%d", &salary);
    grossSalary = salary + (salary / 2) + (salary / 5);
    printf("your total salary is : %d", grossSalary);

    return 0;
}