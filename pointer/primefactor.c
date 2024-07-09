/*#include <stdio.h>
int primefactors(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
         printf("%d,", i);
         n=n/i;
        }
    }
    
}
int main()
{
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Please enter a positive integer.\n");
    }
    else
        primefactors(n);

    
}*/
#include <stdio.h>


void primeFactors(int n) {
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    
    for (int i = 2; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Prime factors of %d are: ", num);
    primeFactors(num);
    
    return 0;
}