#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[5] = {23, 54, 65, 54, 6};
    int x;
    int idx = -1;
    printf("Enter the number to be searched : ");
    scanf("%d", &x);
    bool flag = false; // 0 means element is not present
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            idx = i;
           // break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array\n", x);
    }
    else
    {
        printf("%d is present in Array and its index is %d ", x,idx);
    }
}