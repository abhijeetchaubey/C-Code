#include<stdio.h>
int main(){
    int x , y;
    printf("Enter Cost Price : ");
    scanf("%d" ,&x);
    printf("Enter Selling Price : ");
     scanf("%d" ,&y);
     if (y>x){
        printf("profit");
        int z = y-x;
         printf("\nProfit = %d" ,z);
      }
       else if(y==x){
        printf("No Profit, No Loss");
    }
     else{
        printf("Loss");
    }
     


}