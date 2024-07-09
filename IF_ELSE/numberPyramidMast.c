#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++) //space print 
            printf(" ");
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);//1234 star triangle
        }
        int a=i-1;
        for (int k = 1; k <=i-1 ; k++)
        {
            printf("%d", a); //1,21,321 wala print krne ke liye 
            a--;
        }
        printf("\n");
    }
}