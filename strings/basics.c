#include <stdio.h>
#include <string.h>

int main()
//{
// char ch = 'A';
// printf("%c",ch);
// char arr[5] = {'a', 't', 'e', 'r', 'w'};

// printf("%p ", &arr[1]);
// printf("%p ", &arr[2]);
// printf("%p ", &arr[3]);
// printf("%p ", &arr[4]);
// printf("%p ", &arr[5]);
//}
{
    char arr[] = "Hello kaise ho dosto sb thk\0";
    for (int i = 0; arr[i] !='\0'; i++)
    {
        printf("%c", arr[i]);
    }
}