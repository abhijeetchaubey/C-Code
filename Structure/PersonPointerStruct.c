#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct Person
{
    int age;
    float weight;
} person;
int main()
{
    person p1;
    person *x = &p1;
    (*x).age = 21;
    (*x).weight = 76.24;

    person p2;
    person *y = &p2;
    (*y).age = 19;
    (*y).weight = 64.54;

    printf("%d ", (*x).age);
    printf("%f ", (*x).weight);
    printf("%d ", (*y).age);
    printf("%f ", (*y).weight);
}