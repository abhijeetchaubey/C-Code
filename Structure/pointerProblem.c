#include <stdio.h>
typedef int *pointer;
int main()
{
    int x = 5;
    int y = 6;
    int *a = &x;
    int *b = &y;
    printf("%p\n", a);
    printf("%p", b);
}