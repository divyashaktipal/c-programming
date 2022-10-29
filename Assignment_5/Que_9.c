#include <stdio.h>
int main()
{
    /* QUESTION NO.9
        If the marks obtained by a student in five different subjects are
        input through the keyboard, write a program to find out the aggregate marks.
        Print the aggregate marks of the student on screen. */

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
    printf("Total aggregate marks is :%d", Math + English + Socialscience + Science + Sanskrit);

    return 0;
}