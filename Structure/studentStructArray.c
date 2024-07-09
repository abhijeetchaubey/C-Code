#include <stdio.h>
#include<string.h>
int main()
{
    typedef struct Student
    {
        char Name[20];
        int Roll_No;
        char Grade;
    } Student;
    Student arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Name of Student: ");
        scanf("%s", &arr[i].Name);
        printf("Enter Roll no: ");
        scanf("%d", &arr[i].Roll_No);
        printf("Enter Grade:");
        scanf("%s", &arr[i].Grade);
    }
    printf("\n");
    
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i].Name);
        printf("Roll No%d\n", arr[i].Roll_No);
        printf("Grade %c\n", arr[i].Grade);
    }
    printf("\n");
}