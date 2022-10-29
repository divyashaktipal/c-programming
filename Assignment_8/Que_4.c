#include<stdio.h>
int main(){
  /* QUESTION NO.4
    Write a program to check whether a given number is divisible by 7 or divisible by 3.
    */

    int a, b;
    printf("Enter a number \n");
    scanf("%d", &a);

    if (a % 7 == 0)
    {
        printf("%d is divisible by 7 ", a);
        if(a % 7 == 0 && a % 3 == 0)
        {
            printf("and also divisible by 3 \n");
        }
    }
    else if (a % 3 == 0)
    {
        printf("%d is divisible by 3", a);
    }
    else
    {
        printf("this number is not divisible by 7 and 3");
    }
return 0;
}