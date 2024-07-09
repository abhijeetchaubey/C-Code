#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int lastdigit;
    while (n != 0)
    {
        lastdigit = n % 10;
        if (lastdigit % 2==0 )

            sum +=lastdigit;

        n = n / 10;
    }
    printf("\nThe sum of even digits are %d   :", sum);
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     int sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int lastdigit;
//     while (n != 0)
//     {
//         lastdigit = n % 10;
//         if (lastdigit % 2!=0 )

//             sum +=lastdigit;

//         n = n / 10;
//     }
//     printf("\nThe sum of even digits are %d   :", sum);
// }
