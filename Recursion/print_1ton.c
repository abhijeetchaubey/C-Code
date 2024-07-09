#include <stdio.h>
void num(int a, int n)
{
    if(a>n) return;
   printf("%d\n",a);
    num(a+1,n); return;
    
}

int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);
    num(1,n);
}