#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    if ((x % 5 == 0 || x % 3 == 0) && x % 15!=0)
    {
        // if (x % 15 != 0)
        // {
            printf("divisible by 3 or 5 but not 15");
        }
        else
        {
            printf(" the number is not matching the required condition");
        }
    // }
    // else
    // {
    //     printf("not divisible by3 or 5");
    // }
    
}