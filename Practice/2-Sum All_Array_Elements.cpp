#include <stdio.h>

int sum(int a[],int s) {
  int sum=0;
  for(int i=0;i<s;i++)
  {
    sum+=a[i];
  }
  printf("%d",sum);
}

int main()
{
  int i,s;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
    scanf("%d",&a[i]);

  sum(a,s);
}
