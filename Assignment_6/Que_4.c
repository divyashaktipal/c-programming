#include <stdio.h>
int main()
{
    /* QUESTION NO.4
       The distance between two cities (in kms) is input through the keyboard.
       Write a program to do the following:
       I. Convert the distance in centimeter
       II. Convert the distance in millimeters
       III. Convert the distance in inches.
    */

    float city;
    printf("Enter your distance between two cities(in Kms)\n");
    scanf("%f", &city);

    printf("Your total distance is (in cm) : %f", city * 100000);
    printf("\n\n");

    printf("your total distance is (in mm) : %f", city * 1000000);
    printf("\n\n");

    printf("Your total distance is (in inch) : %f", city * 39370.0787);
    printf("\n\n");

    return 0;
}