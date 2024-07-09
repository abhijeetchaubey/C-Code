#include <stdio.h>
int main(){
    int n;
    printf("Enter day number (1-7) :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wedday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
        printf("Not a week day");
        break;
    }
}