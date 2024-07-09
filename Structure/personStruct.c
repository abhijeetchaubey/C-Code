#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct Person
    {
        char name[20];
        int salary;
        int age;
    } Person;
    Person a;
    strcpy(a.name, "Abhijeet Chaube\n");
    a.salary = 35000;
    a.age = 19;

    Person b;
    strcpy(b.name, "Raghav ");
    b.salary = 85000;
    b.age = 29;
    printf("%s", a.name);
    printf("%d", b.age);
}