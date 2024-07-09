
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reverse = 0;
    int lastdigit = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
         reverse = (reverse*10);
        reverse = reverse + lastdigit;
            n = n/10;
        
    }
           
    printf("\nThe reverse of a given number is %d   :",reverse);
}
