#include <stdio.h>
void num(int n)
{
    if(n==0) return; //base case
    printf("%d\n",n);//code
    num(n-1);//call
    printf("%d\n",n);//code

    return;
}
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);
    num(n);
}