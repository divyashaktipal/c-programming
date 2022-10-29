#include<stdio.h>
int main(){
/*
QUESTION.
Height of a student (in feet) is input through the keyboard.
Write a program to convert this height into inches. Print
the height in inches on output screen.
*/
 int height;
    printf("what is your hight in feet \n");
    scanf("%d", &height);
    printf("your total height is (in Inch): %d", height * 12);
    printf("inch");
return 0;
}