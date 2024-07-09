#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Collage Wallah ";
    printf("%s\n", str);
    int size = 0;
    int k = 0;
    while (str[k] != '0')
    {
        size++;
        k++;
    }
        char s2[size];
    for(int i=0;i<=size-1;i++){
    s2[i] = str[i];
    
}
    printf("%s", s2);

}