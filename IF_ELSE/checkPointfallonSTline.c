#include <stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3;
    printf("Enter 1st Coordinate :", x1, y1);
    scanf("%d %d", &x1, &y1);
    printf("Enter 2nd Coordinate :", x2, y2);
    scanf("%d %d", &x2, &y2);
    printf("Enter 2nd Coordinate :", x3, y3);
    scanf("%d %d", &x3, &y3);
    if (x1 * (y2 - y3) + x2 * (y3 - y2) + x3 * (y1 - y2)==0)
    {
        printf("points fall on straight line");}
     else 
        printf("not fall on straight line");
    
}