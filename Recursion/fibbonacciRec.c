#include<stdio.h>
int fibbo(int n){
    if(n==1 || n==2) return 1;
    return fibbo(n-1)+fibbo(n-2);

}
int main(){
    int n;
    printf("Enter num : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("%d ",fibbo(n));
    }
}
