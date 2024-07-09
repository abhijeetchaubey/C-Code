#include <stdio.h>
int powerlog(int a, int b)
{
    if (b == 0) return 1;

    if (b % 2 == 0)
    {
        return powerlog(a, b / 2) * powerlog(a, b / 2);
    }
    else
    {
        return powerlog(a, b / 2) * powerlog(a, b / 2) * a;
    }
}
int main()
{
    int a;
    printf("Enter base : ");
    scanf("%d", &a);
    int b;
    printf("Enter power : ");
    scanf("%d", &b);
    printf("%d", powerlog(a, b));
}