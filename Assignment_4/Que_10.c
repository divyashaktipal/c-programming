#include<stdio.h>
int main()
{
/*
QUESTION.
Temperature of a city in Fahrenheit degrees is input
through the keyboard. Write a program to convert this
temperature into Centigrade degrees.
*/
int farhenheit;
    printf("what is your temperature in your city in Ferhenheit\n");
    scanf("%d", &farhenheit);
    // Formula c/5 = (F-32)/9  to change fahrenheit in celcious
    printf("your city temperature is (in Centigrade): %d ", (farhenheit * 5 - 160) / 9);
    printf("\n");
return 0;
}