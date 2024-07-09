#include <stdio.h>
int main()
{
    int marks[4];
    for (int i = 0; i <= 3; i++)
    { // i<=10,i<10
        printf("Enter number %d ", (i+1));
        scanf("%d", &marks[i]);
    }
    for (int i =0; i <=3; i++)
    { 
        if (marks[i] < 35)
        {
            printf("%d ", marks[i]);
        }
    }
}