#include <stdio.h>
int main()
{
    int n;
    int a;
    printf("Enter number of star");
    scanf("%d", &n);
    for (int i = 1; i <=n ; i++)
    {
       for(int j=1; j<=i;j++)
        {
            printf("* " );
        }
        printf("\n");
    }
}