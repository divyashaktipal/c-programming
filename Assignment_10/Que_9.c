#include <stdio.h>
int main()
{
    int i;
    printf("Testing of various arithmatic operation-2 \n");

    i = 2 / 9;
    printf("1. Value of integer i is %d \n", i);

    i = 2.0 / 9;
    printf("2. Value of float i is %d \n", i);

    i = 2 / 9.0;
    printf("3. Value of integer i is %d \n", i);

    i = 2.0 / 9.0;
    printf("4. Value of integer i is %d \n", i);

    i = 9 / 2;
    printf("5. Value of integer i is %d \n", i);

    i = 9.0 / 2;
    printf("6. Value of integer i is %d \n", i);

    i = 9 / 2.0;
    printf("7. Value of integer i is %d \n", i);

    i = 9.0 / 2.0;
    printf("8. Value of integer i is %d \n", i);

    return 0;
}