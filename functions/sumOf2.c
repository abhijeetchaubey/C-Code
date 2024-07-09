#include<stdio.h>
int add(int a,int b){
    return a+ b;
}
int main(){
    int a ;
    printf("Enter First Number:");
    scanf("%d",&a);
     int b ;
    printf("Enter First Number:");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
   
    return 0;
}