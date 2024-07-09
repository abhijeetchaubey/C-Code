#include <stdio.h>
int main()
{
    int arr[6] = {2, 4, 1, 6, 1,6};
    for (int i = 0; i <= 5; i++)
    {
        for (int j = i + 1; j <=5; j++)
        {
            if (arr[i] == arr[j])
            {
                i++;
                j=i+1;
                printf("%d is the duplicate element", arr[j]2d);
            }
        }
    }
}