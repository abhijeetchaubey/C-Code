#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter rows:");
    scanf("%d", &r);

    printf("Enter column:");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter a number : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}