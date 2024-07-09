#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows");
    scanf("%d", &n);
    int m;
    printf("Enter number of column ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter Elements of Matrix ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("The maximmum element of given matrix is %d", max);
}
