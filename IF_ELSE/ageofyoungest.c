#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Age of Ram :");
    scanf("%d", &a);
    printf("Age of Shyam :");
    scanf("%d", &b);
    printf("Age of Ajay:");
    scanf("%d", &c);
   if(a>b){
    if(a>c)
    printf("%d is greatest",a);
    else
    printf("%d is greatest" ,c);
   }
   else
   if (b>c)
   printf("b is greatest ");
   else{
    printf("c is greatest");
   }
   return 0;
   
}
