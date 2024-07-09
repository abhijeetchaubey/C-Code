#include <stdio.h>
int sum(int n )
{
    if (n == 1 || n == 0)
        return 1 ;
    int sum = n + sum(n-1);
    return sum;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int s = sum(n);
    printf("%d", s);
    return 0;
}