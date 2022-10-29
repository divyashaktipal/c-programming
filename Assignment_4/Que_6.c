#include<stdio.h>
int main(){
/*
QUESTION.
The distance between two cities (in kms) is input through
the keyboard. Write a program to convert and print this
distance in meters.
*/
int city;

    printf("Enter your distance between city1 and city2 in km\n");
    scanf("%d", &city);
    printf("\n");
    printf("your total distance is(in meter): %d", city * 1000);
    printf("m");

return 0;
}