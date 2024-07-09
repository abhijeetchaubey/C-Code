#include <stdio.h>
int main()
{
  int a, b, c; // d;
  printf("Enter 1st integer : ");
  scanf("%d", &a);
  printf("\nEnter 2nd integer : ");
  scanf("%d", &b);
  printf("\nEnter 3rd integer :");
  scanf("%d", &c);
  if (a > b)
  {
    if (a > c)
      printf("%d is greatest", a);
    else
      printf("%d is greatest", c);
  }
  else
  {
    if (b > c)
      printf("b is greatest");
      else{
        printf("c is greatest");
      }
  }
  return 0;
}
