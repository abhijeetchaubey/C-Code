#include <stdio.h>
int main()
{
    int arr[5] = {1, 3, 4, 4, 3};
    printf("%p ", &arr[1]);
    printf("%p ", &arr[2]);
    printf("%p ", &arr[3]);
    printf("%p ", &arr[4]);
    printf("%p ", &arr[5]);
}
