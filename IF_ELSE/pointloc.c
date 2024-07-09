#include<stdio.h>
int main(){
    int x ,y ;
    printf("enter point :");
    scanf("%d %d" ,&x ,&y);
    if(x==0 && y==0){
        printf("Point on origin");
    }
    
    else if(y==0){
        printf("Point on x-axis");
    }
    
    
    else if(x==0){
         printf("Point on y-axis");
    }
   

else{
    printf("not lie on x or y axis");
}
    
}