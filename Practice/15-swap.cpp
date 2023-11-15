#include <stdio.h>

 int main()
 {
  int a, b ;
  printf("Enter First Number \n ");
  scanf("%d",&a);

  printf("Enter Second Number \n");
  scanf("%d",&b);

  int c;
  c=a;
  a=b;
  b=c;

  printf("%d %d",a,b);

  return 0;
}
