#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter number : ", (i + 1));
        scanf("%d", &arr[i]);
    }
    int max = arr[0];

    for (int i = 0; i <= 4; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d ", max);
}