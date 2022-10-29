#include <stdio.h>
int main()
{
    /*
    QUESTION.
        Assume price of 1 USD is INR 80. Write a program to take the
        amount in INR and convert it into USD.
    */

    int usd;
    printf("IN THIS CODE WE WILL CONVERT DOLLER INTO RUPEES \n ");
    printf("ENTER ANY AMOUNT IN USD \n");
    scanf("%d", &usd);
    int Rupees = usd * 80;
    printf("Your total amount in Rupees is : %d", Rupees);
    return 0;
}