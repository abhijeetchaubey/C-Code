// #include <stdio.h>
// int main()
// {
//     int n;
//     int a;
//     printf("Enter number of star");
//     scanf("%d", &n);
//     for (int i = 1; i <=n ; i=i+2)
//     {
//        /// for (int j = 1; j<= n+1-i; j++)
//        for(int j=1; j<=i;j=j+2)
//         {
//             printf("%d ",j );
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n < 1 || n > 26) {
        printf("Invalid input. Please enter a number between 1 and 26.\n");
        return 1;
    }

    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c ", ch);
            ch = (ch + 1 - 'A') % 26 + 'A';
        }
        printf("\n");
    }

    return 0;
}
