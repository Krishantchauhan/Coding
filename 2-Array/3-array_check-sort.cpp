#include <stdio.h>

int check(int a[])
{
  for(int i=1;i<5;i++)
  {
    //Check next element to previous element
    if (a[i]<a[i-1])
    return false;
  }
  return true;
}

int main()
{
  int a[5]={1,2,3,4,5};
  if(check(a) == false)
    printf("Unsorted\n");
  else
    printf("Sorted\n");
}
