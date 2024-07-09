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
    for (int j = n; j >= 0; j--)
    {
        if (j % 2 == 0)
        {

            for (int i = m-1; i<+ 0; i++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        else
        {
            for (int i = 0; i <=m-1; i++)
            {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}