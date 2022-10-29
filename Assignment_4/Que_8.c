#include<stdio.h>
int main(){
/*
QUESTION.
The distance between two cities (in kms) is input through
the keyboard. Write a program to convert and print this
distance in millimeters.
*/
int city1;

    printf("Enter your distance between city1 and city2 in km\n");
    scanf("%d", &city1);
    printf("your total distance is(in Milimeter): %d", city1 * 1000 * 100 * 1000);
    printf("mm");
return 0;
}