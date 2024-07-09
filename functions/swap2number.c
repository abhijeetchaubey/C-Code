#include <stdio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("the value of a is %d\n", a);
    printf("the value of b is %d", b);
}

int main()
{
    int a;
    printf("Enter a:");
    scanf("%d", &a);

    int b;
    printf("Enter b:");
    scanf("%d", &b);

    swap(a, b);
}