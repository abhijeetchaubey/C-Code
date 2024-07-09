#include <stdio.h>
int main(){
    int arr[5]={2,1,8,5,4};
    int product=1;
    for(int i=0;i<=4;i++){
        product=product*arr[i]; 
    }
        printf("%d ",product);

}