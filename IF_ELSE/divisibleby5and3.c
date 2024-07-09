#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    // if(n%3==0 && n%5==0){
    //     printf("divisible by 5&3");
    // }
    // else{
    //     printf("not divisible ");
    // }
    if(n%3==0 || n%5==0){
        printf("divisible by 3 or 5");
    }
        else{
            printf("not divisible");
        }
    
}