#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct team
{
    char Name[11];
    int player;
    int supportstaff;
} team;

void fun(team a)
{
    printf("%d ", a.player);
    printf("%s ", a.Name);

    return;
}
void change(team b)
{
    b.player = 23;
    b.supportstaff = 43;
    return;
}
int main()
{

    team IPL;
    strcpy(IPL.Name, "RCB");
    IPL.player = 15;
    IPL.supportstaff = 5;
    //fun(IPL);
    change(IPL);
    printf("%d ", IPL.player);
    printf("%d ", IPL.supportstaff);

    return 0;
}
