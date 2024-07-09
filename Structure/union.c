#include <stdio.h>
#include <string.h>
typedef union pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char Name[13];
} pokemon;
int main()
{
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    // strcpy(pikachu.Name, "pikachu");
    pikachu.tier = 'A';
    pikachu.speed = 100;

    printf("%d ", pikachu.attack);
    printf("%d ", pikachu.hp);
    // printf("%s ", pikachu.Name);
    printf("%c ", pikachu.tier);
    printf("%d ", pikachu.speed);
}