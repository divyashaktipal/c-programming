#include<stdio.h>
int main(){
/*
QUESTION.
The distance between two cities (in kms) is input through
the keyboard. Write a program to convert and print this
distance in centimeters.
*/
int city2;

    printf("Enter your distance between city1 and city2 in km\n");
    scanf("%d", &city2);
    printf("your total distance is(in Centimetr): %d", city2 * 1000 * 100);
    printf("cm");
return 0;
}