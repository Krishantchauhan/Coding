#include <stdio.h>

int sum(int a[],int s)
{
  float sum=0;
  for(int i=0;i<s;i++)
  {
    sum=a[i]+sum;
  }
  printf("%lf",sum/double(s));
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

return 0;
}
