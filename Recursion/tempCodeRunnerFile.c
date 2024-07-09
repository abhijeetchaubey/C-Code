#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-3)+stair(n-2)+stair(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",stair(n));
}