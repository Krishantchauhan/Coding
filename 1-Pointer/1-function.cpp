#include <stdio.h>

int addptr(int *a)
{
  *a=*a+10;
}

int add(int b)
{
  b=b+10;
}
int main()
{
  int a=10;

  addptr(&a);
  printf("%d",a);

  int b=5;
  //It do not add 10 to the variable cause it is local to main function only (;
  printf("%d",b);

}
