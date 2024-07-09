#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++) // print space
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) // print star
        {
            printf("*");
        }
        printf("\n");
    }
}