#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Write a program to check whether a given number is divisible by 5 or not.
    */

    int program;

    printf("Enter any integer \n");
    scanf("%d", &program);

    if (program % 5 == 0){
	
        printf("%d is divisible by 5\n", program);
    }
    else{
        printf("%d is not divisible by 5 \n", program);
    }
    return 0;
    
}