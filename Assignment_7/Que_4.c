 #include<stdio.h>
 int main(){
 
 /*QUESTION NO.4
    Ask the user to enter a value. Write a program to Determine if the value is less
    than ten or greater than ten.Print messages accordingly.*/

    int inputValue;
    printf("Enter any integer \n");
    scanf("%d",&inputValue);
    
    if(inputValue < 10 || inputValue >10)
    {
    	printf("Accordingly !! \n");
    }
    else if(inputValue == 10)
    {
    	printf("Wrong Input");
	}
    return 0;
}