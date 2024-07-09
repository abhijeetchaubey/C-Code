#include <stdio.h>
int main()
{
    int r;
    printf("ernter number of students : ");
    scanf("%d", &r);
    int arr[r][3];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &arr[r][3]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", &arr[r][3]);
        }
    }
    printf("\n");
}