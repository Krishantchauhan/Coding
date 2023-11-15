#include <stdio.h>

 int main()
 {
  int a;
  printf("Enter First Number \n ");
  scanf("%d",&a);
  int *b;
  b=&a;
  printf("%d",*b);

  return 0;
}
