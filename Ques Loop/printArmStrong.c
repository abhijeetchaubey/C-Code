#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int a, b, c;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((a * a * a) + (b * b * b) + (c * c * c) == n)
        {
            n = a + b + c;
        }
    }
    if (n = a + b + c)
    {
        printf("The number is armstrong number");
    }
    else
        printf("The number is not a armstrong");
}
