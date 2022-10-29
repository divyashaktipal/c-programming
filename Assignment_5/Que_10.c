#include <stdio.h>
int main()
{
    /* QUESTION.
       Assume that the maximum marks that can be obtained by a student in any
       subject is 100.If the marks obtained by a student in five different subjects
       are input through the keyboard, write a program to find out the percentage
       obtained by the student. Print the percentageof the student on screen.
    */

    int Math, English, Socialscience, Science, Sanskrit;
    printf("IN THIS TUTORIAL WE WILL CALCULATE PERSENTAGE OF YOUR MARKS \n");
    printf("\"ENTER YOUR MARKS OUT OF 100\"\n\n");

    printf("Enter your Math marks :\n");
    scanf("%d", &Math);
    printf("Enter your English marks :\n");
    scanf("%d", &English);
    printf("Enter your Socialscience marks:\n");
    scanf("%d", &Socialscience);
    printf("Enter your Science marks:\n");
    scanf("%d", &Science);
    printf("Enter your Sanskrit marks:\n");
    scanf("%d", &Sanskrit);
    int totalMarks = Math + English + Socialscience + Science + Sanskrit;

    printf("Your Total Percentage is :%d", totalMarks / 5);
    printf("\n");
    return 0;
}