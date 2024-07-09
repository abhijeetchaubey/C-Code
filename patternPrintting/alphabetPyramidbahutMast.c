#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows :");
    scanf("%d", &n);
    int a = 1;
    int d = a + 64;
    int  temp= d;
    int nsp = 1;
    
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%c", (char)d);
        d++;
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= ; j++)
        {
            printf("%c", (char)d);
            d++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            d++;
        }
        for(int j=1;j<=;j++){
            printf("%c",(char)d);
        }
        nsp+= 2;
    --;
        printf("\n");
    }
}