#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter a base :");
    scanf("%d", &a);
    
    int b;
    printf("Enter a power :");
    scanf("%d", &b);

     int root = sqrt(a);
     printf("The Square root is :%d",root);
    int q = pow(a, b);
    printf("%d", q);
    return 0;
}