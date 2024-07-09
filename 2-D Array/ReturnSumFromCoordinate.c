#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of rows ");
    scanf("%d", &n);
    printf("Enter the number of column ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter the element of Matrix");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Sum of the element of given coordinate is %d ", sum);
}