#include <stdio.h>
#include <string.h>
int main()
{
    char str1[16];
    puts("Orignal String");
    gets(str1);
    int size = 0;
    int k = 0;
    while (str1[k] != '\0')
    {
        size++;
        k++;
    }
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
    puts("The reverse string is : ");
    puts(str1);
}
