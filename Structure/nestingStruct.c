#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int tier;
        char name[12];
    } pokemon;
    typedef struct Legendarypokemon
    {
        pokemon normal;
        char ability[20];
    } Legendarypokemon;

    Legendarypokemon mewtow;
    strcpy(mewtow.ability, "pressure");
    mewtow.normal.hp = 132;
    mewtow.normal.tier = 143;
    mewtow.normal.speed = 198;

    typedef struct godpokemon
    {
        Legendarypokemon a;
        int specialpower;
    } godpokemon;

    godpokemon b;
    b.specialpower = 432;
    strcpy(b.a.ability, "Bahut Marta hai");
    b.a.normal.hp = 120;
    strcpy(b.a.normal.name, "Gudda");

    printf("%s", b.a.normal.name);
    printf("%s", b.a.ability);
    printf("%d", b.a.normal.hp);
    printf("%d", mewtow.normal.hp);
}
