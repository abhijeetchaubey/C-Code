#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Collage Wallah ";
    char *ptr = str;//ptr is a shallo copy
    str[0]='M';
    puts(str);
    // int i = 0;
    // while (*ptr != '\0')
    // {
    //     printf("%c ",*ptr);
    //     ptr++;
    //     i++;
    // }
}