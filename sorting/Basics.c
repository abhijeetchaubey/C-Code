#include <stdio.h>
int main()
{
    int sum = 0;
    int sum1 = 21;
    int n = 6;
    int arr[6];
    int duplicate;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[i];
        }
    }
    duplicate = sum - sum1;
    printf("%d is duplicate", duplicate);
}