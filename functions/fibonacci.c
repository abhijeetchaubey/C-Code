#include <stdio.h>
int fibonacci(int n){
    int a=1;
    int b=0;
    int sum=0;
   for(int i=1;i<=n;i++){
   sum=a+b;
    a=b;
    b=sum;
    }
    printf("%d",sum);
    return sum;
}
int main(){
 int n;

 fibonacci(n);

    
}