#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number of rows:");
    scanf("%d", &n);
    int m;

    printf("Enter a number  of columns:");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++) // outer loop signifies number of lines
    {
        for (int i = 1; i <= m; i++) // inner loop signifies -no. of stars in each lines
        {
            printf("*  ");
        }

        printf("\n");
    }
    return 0;
}