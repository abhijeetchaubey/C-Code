#include <stdio.h>
int main()
{
    int x;
    printf("Enter Marks :");
    scanf("%d", &x);
    if(x>=90 && x<=100)
    
        printf("A+");
    
    
    else if (x>=80 && x<90)
    
        printf("A");
    
    else if(x>=70 && x<80)
        printf("B+");
    else if(x>=60 && x<70)
        printf("B");
    else if(x>=33 && x<60)
        printf("C");
    else 
        printf("E");
    

    
}