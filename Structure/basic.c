#include <stdio.h>
int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
    };
    struct pokemon pikachu;
    printf("Enter attack of pikachu : ");
    scanf("%d", &pikachu.attack);
    pikachu.hp = 50;
    pikachu.speed = 100;

    printf("%d", pikachu.attack);

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 90;

    struct pokemon bulbashor;
    bulbashor.attack = 85;
    bulbashor.hp = 95;
    bulbashor.speed = 68;
    return 0;
}