#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i <=size; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d", arr[i]);
    }
}