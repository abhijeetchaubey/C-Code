#include <stdio.h>
int main()
{
    int a;
    int arr[10] = {23, 43, 68, 12, 34, 85, 42, 57, 59, 90};
    for (int i = 0; i <= 9; i++)
    {
        if (i % 2 == 0)
        {
            a = arr[i] + 10;
        }
        else
            a = arr[i] * 2;

        printf("%d ", a);
    }
}