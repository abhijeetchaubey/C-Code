#include <stdio.h>
void reverse(int arr[], int a, int b)
{
    for (int i = a, j = b; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter element of Array : ");
    int arr[n];

    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array : ");
    int k;
    scanf("%d", &k);
    if (k < n)
    {
        k = k % n;
    }
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}