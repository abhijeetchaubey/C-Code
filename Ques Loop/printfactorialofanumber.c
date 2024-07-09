#include <stdio.h>
int main()
{
    double n;
    printf("Enter a number ");
    scanf("%d", &n);
    if(n<0){
        printf("Factorial is not defined for negative number");

    }

    float  factorial = 1;
        float i = 1;
    while (i<=n)
    {
        factorial = (factorial *i);
        i++;
    }
    printf("factorial of a number %d is :%.2f\n",n, factorial);
}