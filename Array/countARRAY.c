#include <stdio.h>
int main()
{
    int x = 11;
    int count = 0;
    int arr[5] = {1, 54, 34, 2, 4};
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > x)
            count = count + 1;
      
    }
      printf("%d ", count);
}