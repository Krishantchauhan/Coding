#include <stdio.h>

// int sum(int *a,int s)
// Both  are Same a[] C and C++ treat as Pointer to array
// int sum(int a[],int s)


int sum(int *a,int s)
{
  int sum=0;
  for(int i=0;i<s;i++)
    sum=a[i]+sum;
  return sum;
}

int main()
{
  int i,s;
  int a[5]={10,20,40,30,50};
  s=sizeof(a)/sizeof(a[0]);
  int x=sum(a,s);
  printf("%d",x);
return 0;
}
