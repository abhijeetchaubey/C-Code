#include <stdio.h>
int main()
{
    int n,x;
    printf("Enter no of rows ");
    scanf("%d", &x);
    for (int n= 1;  n<=x; n++){
    for (int i = 1; i <= n; i++)
    {
        
        
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            int d = a + 64;
            char ch = (char)d;
            if(n%2==0)
            {
                printf("%d" ,x);
            }
            else
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    }
    return 0;
}
