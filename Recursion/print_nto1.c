#include <stdio.h>
void num(int n ,int a)
{
    if(a>n) return;
    printf("%d\n",n);
    num(n-1,a);
    return;
}
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);
    num(n,1);
}