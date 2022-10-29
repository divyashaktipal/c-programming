#include<stdio.h>
int main(){
/*
QUESTION.
Write a simple C program to subtract two integer values
and print the output.
*/

    int firstSum, secondSum;
    printf("what is your first value\n");
    scanf("%d", &firstSum);
    printf("\n");
    printf("WHAT IS YOUR SECOND Value\n");
    scanf("%d", &secondSum);
    printf("\n");
    printf("YOUR TOTAL VALUE IS %d", firstSum - secondSum);
    printf("\n");
return 0;
}
