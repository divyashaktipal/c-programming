#include <stdio.h>
int main()
{
    /* QUESTION.
        Assume that the maximum marks that can be obtained by a student in any
        subject is 100. If the marks obtained by a student in five different subjects
        are input through the keyboard, write a program to do the following:
        I. Find out total marks obtained by the student
        II. Find out the percentage obtained by the student
        III. Find out the average marks of the student.
    */

    int Math, English, Socialscience, Science, Sanskrit;
    printf("Enter your marks of Math :\n");
    scanf("%d", &Math);
    printf("Enter your marks of English :\n");
    scanf("%d", &English);
    printf("Enter your marks of Socialscience :\n");
    scanf("%d", &Socialscience);
    printf("Enter your marks of Science :\n");
    scanf("%d", &Science);
    printf("Enter your marks of Sanskrit :\n");
    scanf("%d", &Sanskrit);

    int totalMarks = Math + English + Socialscience + Science + Sanskrit;
    printf("your Total MARKS IS : %d", totalMarks);
    printf("\n");
    printf("your average MARKS is : %d", totalMarks / 5);
    printf("\n");
    printf("Your Total Percentage is : %d", totalMarks / 5);
    printf("percent\n");
    return 0;
}