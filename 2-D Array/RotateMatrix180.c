#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of rows");
    scanf("%d", &n);
    printf("Enter the number of column");
    scanf("%d", &m);
    int arr[n][m];
    printf("The element of matrix is");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The given matrix is\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int brr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] = arr[j][i];
        }
        printf("\n");
    }
    printf("transpose of matrix is\n");
        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           printf("%d ",brr[i][j]);
        }
        printf("\n");
    }

    // rotate
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = n - 1;
        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}