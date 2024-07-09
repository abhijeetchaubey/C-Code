#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    int a = 1;
    int b = 0;
    int sum = 0 ;
    for (int i = 1; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;

        printf("%d ", sum);
    }
}
