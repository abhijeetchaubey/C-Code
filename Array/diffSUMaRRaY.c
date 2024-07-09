#include <stdio.h>
int main()
{
    int sum1 = 0;
    int sum2 = 0;
    int arr[7] = {34, 54, 76, 21, 87, 40, 98};
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum1 += arr[i];
        }
        else
            sum2 += arr[i];
                        
    }
    printf("Sum of Even indices %d \n",sum1);
    printf("Sum of Odd indices %d \n",sum2);
    int Diff = sum1 - sum2;
    printf("Difference of Even and Odd indices %d", Diff);
}