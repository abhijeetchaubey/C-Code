#include<stdio.h>
#include<string.h>
union Data{
    int i; float f; char str[20];
};
int main(){
    union Data data;
    data.i=10;
    data.f=220.5;
    strcpy(data.str,"C programming");
    printf("%d",data.i);
}