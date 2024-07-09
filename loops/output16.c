#include <stdio.h>
int main()
{
    float x = 3.1;
    while (x >= 1.1);
    {

        printf("\n%.2f", x);
        x = x - 0.1;
    }
}