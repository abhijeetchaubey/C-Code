#include<stdio.h>
int main(){
     int x , y;
     printf("Enter Length : ");
     scanf("%d" ,&x);
     printf("Enter Breath : ");
     scanf("%d" ,&y);
     int z = x*y;
     int a = 2*(x+y);
 if(z>a){
    printf("/nArea is greater");
 }
 if(z==a){
    printf("Area is equal to Perimeter");
 }
 else{
    printf("Perimeter is greater");
 }
}
   