#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    pokemon arr[3];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 40;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Pikachu");

    arr[1].attack = 70;
    arr[1].hp = 90;
    arr[1].speed = 110;
    arr[1].tier = 'S';
    strcpy(arr[1].name, "mewtow");

    arr[2].attack = 130;
    arr[2].hp = 70;
    arr[2].speed = 80;
    arr[2].tier = 'G';
    strcpy(arr[2].name, "Charizard");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i].name);
        printf("Attack: %d\n", arr[i].attack);
        printf("HP : %d\n", arr[i].hp);
        printf("Speed : %d\n", arr[i].speed);
        printf("Tier : %d\n", arr[i].tier);
        printf("\n");
    }
}