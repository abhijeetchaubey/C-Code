#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{ // cc-current row cc- current column er- end row ec- end column
    int rightways = 0;
    int downways = 0;
    if (cr == er && cc==ec)
        return 1;
    if (cr == er)
    { // only right ways call
        rightways += maze(cr, cc + 1, er, ec);
    }

    if (cc == ec)
    { // only downways call
        downways += maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        int rightways = maze(cr, cc + 1, er, ec);
        int downways = maze(cr + 1, cc, er, ec);
       
    }
     int totalways = rightways + downways;
    return totalways;
}
int main(){
int n;
printf("Enter number of rows of maze ");
scanf("%d", &n);
int m;
printf("Enter number of column of maze ");
scanf("%d", &m);
int noOfways= maze(1,1,n,m);
printf("%d",noOfways);
}
