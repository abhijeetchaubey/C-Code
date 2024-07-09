#include<stdio.h>
int main(){
int a;
    printf("Enter a integer : ");
    scanf("%d", &a);
    int n = 100;
    for (int i=1; i<=a; i++)
      {  printf("%d ", n);
         n = n - 3;

    }
// for(int i=100; i>0; i=i-3)
//         printf("%d " ,i);

}