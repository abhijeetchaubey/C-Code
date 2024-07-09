#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct data
{
    int RollNumber;
    char Name[20];
    char department[20];
    char course[20];
    int year;
} data;

void check(data a, data b)
{
    // if (strcmp(a.department, b.department) == 0)
    if(a.department!=b.department)
     printf("Student have same department");
else
      printf("Students have different department");
}

int main()
{

    data student1;
    student1.RollNumber = 196;
    strcpy(student1.Name, "Abhijeet Chaubey");
    strcpy(student1.course, "B.tech");
    strcpy(student1.department, "Computer Science");
    student1.year = 2023;

    data student2;
    student2.RollNumber = 197;
    strcpy(student2.Name, "Kirit Somani");
    strcpy(student2.course, "B.tech");
    strcpy(student2.department, "Computer Science");
    student2.year = 2023;

    check(student1, student2);
}