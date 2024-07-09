#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[10] = {76, 2, 3, 105, 95, 78, 75, 88, 23, 105};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i <= 9; i++)
    {

        if (max <= arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }

    printf("%d", smax);
}
