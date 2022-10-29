#include <stdio.h>
int main()
{
    /* QUESTION.
    WAP to print square of first 10 natural numbers.
    */
    int n, sq;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    while (n <= 10)
    {
        sq = n * n;
        printf("%d ", sq);
        n++;
    }
    return 0;
}