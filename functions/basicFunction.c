#include <stdio.h>
void England(){
    printf("Namaste Angrej \n");
    return;
}
void Australia(){
    printf("Namaste Aussies \n");
    England();
    void india();
    india();
    return;
}
void india(){
    printf("Namaste India! \n");
    Australia();
    return;
}
int main(){
    india();
    return 0;
}