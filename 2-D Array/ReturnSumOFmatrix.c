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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ",arr[i][j]);
            }

            printf("\n");
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum += arr[i][j];
            }
        }
        printf("The sum of given matrix is %d", sum);
    }

