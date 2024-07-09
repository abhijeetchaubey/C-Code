#include <stdio.h>
int min(int a, int b){
    if (a < b) return a;
    else return b;
}
int main(){
    int a;
    printf("Enter a ");
    scanf("%d",&a);
    int b;
    printf("Enter b ");
    scanf("%d",&b);
    int x=  min(a,b);
    printf("The min of %d and %d is:%d",a,b,x);
}