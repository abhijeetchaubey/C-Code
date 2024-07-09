#include <stdio.h>
int main()
{
    int arr[4][2] = {{1, 34}, {2, 65}, {3, 79}, {4, 78}};
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}