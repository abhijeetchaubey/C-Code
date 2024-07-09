#include <stdio.h>
int main()
{
    int n;
    int lastdigit;
    int sum = 0;
    printf("Enter a number");
    scanf("%d", &n);

    while (n != 0)
    {
        lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n / 10;
    }

    int reverse = 0;
    int tempsum = sum;
    while (tempsum != 0)
    {
        int digit= tempsum % 10;
        reverse = reverse * 10 + digit;
       
        tempsum = tempsum /10;
    }
    printf("The sum of given number is : %d \n", sum);
    printf("The reverse of sum is :  %d ", reverse);
}
