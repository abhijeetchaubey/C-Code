#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
//gets(str); 
scanf("%[^\n]s",str);
    //str[1] = 98;
   // printf("%s", str);
   puts(str);
}