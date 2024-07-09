#include <stdio.h>
void preINpost(int n)
{
    if (n == 0)  return;
    printf("pre %d \n", n);
    preINpost(n - 1);
    printf("IN %d\n", n);
    preINpost(n - 1);
    printf("Post %d\n", n);
    return;
}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    preINpost(n);

    return 0;
}