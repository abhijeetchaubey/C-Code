#include <stdio.h>
int main()
{
    int r[4];
    int a[4] = {2, 4, 5, 3};
    printf("Given Array : ");
    for (int i = 0; i <= 3; i++)
    {
        printf("%d ", a[i]);
        }
    printf("\n");
    printf("Reverse Array : ");
    for (int i = 3; i >= 0; i--)
    {
        r[i] = a[i];
        printf("%d ", r[i]);
    }
}