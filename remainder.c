#include<stdio.h>
int main(){
    int a ;
    printf("Enter Dividend:");
    scanf("%d",&a);
    int b ;
    printf("Enter Divisor:");
    scanf("%d",&b);
    int c = a/b;
    int r = a-b*c;
    printf("The Remainder When %d is divided by %d is: %d" ,a,b,r);
    //int r = a%b;
     // printf("Remainder  when %d is divided by %d" , a,b,r);

    return 0 ;
    
    
}