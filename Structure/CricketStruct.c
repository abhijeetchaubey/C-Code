#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct Cricketer_Record
    {
        char Name[20];
        int age;
        int no_of_matches;
        float Avg_runs;
    } Cricketer_Record;

    Cricketer_Record arr[3];
    for (int i=0; i <3; i++)
    {
        printf("Name of Player %d : ",i);
        scanf("%s", &arr[i].Name);
        printf("Age of Player : ");
        scanf("%d", &arr[i].age);
        printf("Matches : ");
        scanf("%d", &arr[i].no_of_matches);
        printf("Avg runs : ");
        scanf("%f", &arr[i].Avg_runs);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", arr[i].Name);
        printf("Age: %d\n", arr[i].age);
        printf("matches:  %d\n", arr[i].no_of_matches);
        printf("Average :  %f\n", arr[i].Avg_runs);
    }
}