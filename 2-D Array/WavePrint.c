#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows:");
    scanf("%d", &m);
    printf("Enter the number of column:");
    scanf("%d", &n);
    int arr[m][n];
    printf("Element of matrix");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is\n ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix after swapping : \n");
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {

            for (int j = 0; j < m; j++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}