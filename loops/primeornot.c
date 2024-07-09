#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    int a = 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n < 0)
    {
        printf("Not valid input ");
    }
    else if (n == 1)
        printf("1 is neither prime nor composite");
    else if (a == 0)
        printf("the given number is prime\n");
    else
        printf("the given number is composite\n");

    return 0;
}
