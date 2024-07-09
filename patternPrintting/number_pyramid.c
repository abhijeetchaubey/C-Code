#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows:");
    scanf("%d", &n);
    int str = n;
    int spc = 0;
    for (int i = 1; i <= n; i++){
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for (int j = 1; j <= str; j++)
        {
            printf("%d",j);

        }
        for (int k = 1; k <= spc; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= str; j++)
        {
            printf("%d",j);
        }
        str--;
        spc += 2;
        printf("\n");
    }
}