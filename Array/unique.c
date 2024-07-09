#include <stdio.h>
int main()
{
    int arr[5] = {2, 2, 1, 6, 1};
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j <= 4; j++)
        {
            if (arr[i] != arr[j])
            {
                printf("%d is the unique element", arr[i]);
                break;
            }
        }
    }
}