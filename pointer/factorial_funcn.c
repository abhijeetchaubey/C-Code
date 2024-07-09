#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    if (n < 0)
    {
        return 1;
    }
    else
        return fact;
}
int main()
{
    int n;
    printf("Enter number of factorials to calculate: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("The factorial of first n numbers are ");

    for (int i = 0; i <= n; i++)
    {
        int x = factorial(n-(n-i));

        printf("%d! = %d\n", i, x);
    }
}