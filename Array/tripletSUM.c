#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 12;
    int count = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = i + 2; k <= 7; k++)
            {

                if (arr[i] + arr[j] + arr[k] == x)
                {
                    count += 1;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("Number of Pairs are : %d", count);
}