#include <stdio.h>
int main()
{
    int n ,x;
    printf("Enter no.of rows :");
    scanf("%d", &n);
    printf("Enter no.of column :");
    scanf("%d", &x);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)  
        {
            if (j == 1 || j==x|| i ==1 || i==n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}