#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct Cricket
{
    int run;
    int Century;
    int Wickets;
    float avg;
    char Batsman[20];

} Cricket;
void change(Cricket *c)
{
    strcpy((*c).Batsman, "Virat");
    //(*c).run = 2431;
    c->run = 3245;
    (*c).Century = 58;
    (*c).Wickets = 435;
}
int main()
{
    Cricket India = {1254, 45, 489, 45.26};
    strcpy(India.Batsman, "Abhijeet Chaubey");
    // India.run = 2312;
    // India.Century = 11;
    // India.Wickets = 54;
    // // int* -> address of integer value

    // printf("%s ",(*x).Batsman);
    //  printf("%d",(*x).Century);
    printf("%d\n", India.run);
    printf("%d\n", India.Century);
    printf("%d\n", India.Wickets);
    printf("%f\n", India.avg);
    printf("%s\n", &India.Batsman);

    change(&India);

    printf("%d\n", India.run);
    printf("%d\n", India.Century);
    printf("%d\n", India.Wickets);
    printf("%s\n", &India.Batsman);
    // // change(&India);

    // printf("%p",x);

    return 0;
}