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
    printf("The given matrix is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int maxsum = -1;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        printf("The Sum of row %d is %d \n", i, sum);
        if (maxsum < sum)
        {
            maxsum = sum;
            idx = i;
        }
    }
        printf("The Max Sum of row %d of matrix is %d", idx, maxsum);
    
}