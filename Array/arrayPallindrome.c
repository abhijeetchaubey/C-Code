unique#include <stdio.h>

int main()
{
    int arr[4];
    printf("Enter Array");
    for (int i = 0; i <= 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int j = 3; // 1221
    int i = 0;
    while (i < j)
    {
        i++;
        j--;
    }
    if (arr[i] == arr[j])
    {
        printf("THE Given Array is Pallindrome ");
    }
    else
        printf("Not a pallindrome");
}
