#include <stdio.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int date;
        int month;
        int year;
    } date;

    date a, b;

    a.date = 12;
    a.month = 6;
    a.year = 2005;

    b.date = 2;
    b.month = 6;
    b.year = 2005;

    bool flag = true;
    if (a.date != b.date)
        flag = false;
    if (a.month != b.month)
        flag = false;
    if (a.year != b.year)
        flag = false;

    if (flag == true)
        printf("Equal");
    else
        printf("Unequal");
    printf("\n");
    printf("Dates are:");
    printf("%d/", b.date);
    printf("%d/", b.month);
    printf("%d", b.year);

    printf("\n");
    printf("%d/", b.date);
    printf("%d/", b.month);
    printf("%d", b.year);
}