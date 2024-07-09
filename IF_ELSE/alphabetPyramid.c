#include <stdio.h>
int main()
{
    int n , a=65;
    printf("Enter Rows :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c ", (char)(a+j-1));
            
        }
        printf("\n");
    }
    return 0;
}