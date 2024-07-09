#include <stdio.h>
int main()
{
    // int arr[5]= {2,4,6,8,10};
    // arr[4]=100;
    // arr[1]=1;
    // float arr[3]={1.2,3.4,4.5};
    // char arr[4]={'a','n','%','*'};
    int arr[5];

    for (int i = 0; i <= 4; i++) // loop jb lago tb index print krna hai
    {
        //int a = i + 1;
        printf("Enter element number %d\n", i);
            scanf("%d", &arr[i]);
    }
    for(int i=0;i<=4;i++){
    printf("%d ", arr[i]);
    }
    return 0;
}