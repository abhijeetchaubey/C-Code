#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        int price;
        int no_of_pages;
    } a, b, c;

    a.no_of_pages = 100;
    a.price = 411;
    strcpy(a.name, "Secret Seven");
    
    b.no_of_pages = 123;
    b.price = 181;
    strcpy(b.name, "Pschyology of money");

    c.no_of_pages = 154;
    c.price = 321;
    strcpy(c.name, "Half Girlfriend");

    printf("%d\n", a.no_of_pages);
    printf("%d\n", a.price);
    printf("%s\n", a.name);

     printf("%d\n", b.no_of_pages);
    printf("%d\n", b.price);
    printf("%s\n", b.name);

 printf("%d\n", c.no_of_pages);
    printf("%d\n", c.price);
    printf("%s\n", c.name);

}