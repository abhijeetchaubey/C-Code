#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("Enter the number of rows for1st matrix:");
    scanf("%d", &m);
    printf("Enter the number of column for 1st matrix:");
    scanf("%d", &n);
    int arr[m][n];
    printf("Element of 1st matrix");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The first matrix is\n ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of rows of 2nd matrix");
    scanf("%d", &p);
    printf("Enter the number of column of 2nd matrix");
    scanf("%d", &q);
    int brr[p][q];
    printf("Enter element of 2nd matrix");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("2nd matrix is:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if (n != p)
            {
                printf("Multiplication of given matrix is not possible");
                break;
            }
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    // multiplied matrix
    printf("Multiplied matrix is\n:");
    int res[m][q];
    int cr = n; // int n and int p = honge
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            // i row of a[][] and j column of b[][]
            //(a[i][0],a[i][1],a[i][2],.....)*(b[0][j],b[1][j],b[2][j])
            res[i][j] = 0;
            for (int k = 0; k < cr; k++)
            {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}