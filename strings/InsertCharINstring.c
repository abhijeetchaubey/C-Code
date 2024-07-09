#include <stdio.h>
int main()
{
    char str[20] = "Collage";
    puts(str);
    for (int i = 6; i >= 3; i--)
    {
        str[i + 1] = str[i];
    }
    str[2] = 'k';
    printf("%s", str);
}