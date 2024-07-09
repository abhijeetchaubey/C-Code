#include <stdio.h>
int main()
{
    //     int x = 4, y, z;
    //     y = --x;
    //     z = x--;
    //     printf("\n%d %d %d" ,x,y,z);

int x = 4, y = 3;
int z;
z = x-- - y;
printf("\n %d %d %d " , x, y, z);
}