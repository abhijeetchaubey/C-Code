#include <stdio.h>
int main()
{ 
    int rows, column;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    printf("Enter number of column:");
    scanf("%d", &column);

    int arr[rows][column];
    int brr[rows][column];

    printf("Enter elements of arr :");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    printf("Enter elements of brr :");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}
