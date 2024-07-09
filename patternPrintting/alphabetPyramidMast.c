#include <stdio.h>
int main()
{
    int n, a = 64;
    printf("Enter Number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", (char)(a + j));
            }

        int b=i-1;
            for (int k = 1; k <= i - 1; k++){
                printf("%c",(char)(a+b) );
                b--;
        }
        printf("\n");
    }
}