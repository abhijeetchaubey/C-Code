#include <stdio.h>
int main()
{
    int a = 65;
    int *x = &a; // int* ->store add of integer 
   //*x = 7; // a is changed
   int** y = &x;  // int* ka add store krta hai 
    printf("%d\n", *x);
    printf("%d\n", **y);
    printf("%p\n", &a);
    printf("%p\n", &x);
    printf("%d\n",*x);
    printf("%p\n",x);//value vof pointer p

    return 0;
}