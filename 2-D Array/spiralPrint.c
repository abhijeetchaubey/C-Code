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
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int totalelement = m * n;
    int count = 0;
    while (totalelement > count)
    {
        // print the min row
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d", arr[minr][j]);
            count++;
        }
        minr++;
        if (count >= totalelement)
            break;
        // print the max column
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d", arr[i][maxc]);
            count++;
        }
        maxc--;
        if (count >= totalelement)
            break;

        // print max row
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d", arr[maxr][j]);
            count++;
        }
        maxr--;
        if (count >= totalelement)
            break;

        // print min column
        for (int i = maxr; i >= minr; i--)
        {
            printf("%d", arr[i][minc]);
            count++;
        }
        minc++;
        if (count >= totalelement)
            break; 
    }
}