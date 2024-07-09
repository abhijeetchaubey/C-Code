#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int lastdigit = 0;
    while (n != 0)
    {
       int lastdigit = n % 10;
        n = n / 10;
        
            sum = sum + lastdigit ;
        
    }

    printf("\nThe sum of digits are %d   :", sum);
}

