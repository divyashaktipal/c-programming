#include<stdio.h>
int main(){
/*
QUESTION No.
Write a simple C program to divide two integer values and
print the output.
*/

    float division1, division2;
    printf("Enter first integer \n");
    scanf("%f", &division1);
    printf("Enter second integer \n");
    scanf("%f", &division2);
    printf("total division value is : %f", division1 / division2);

return 0;
}