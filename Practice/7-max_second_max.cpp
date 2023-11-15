#include <stdio.h>

int change(int a[],int s)
{
  int max=a[0];
  int smax=a[0];
  int temp;

  for(int i=0;i<s;i++)
  {
    if(max<a[i])
    {
      max=a[i];
      temp=i;
    }
  }

  printf("%d \t",max);

  for(int i=0;i<s;i++)
  {
    if(max>a[i] && a[i]>smax)
    {
      smax=a[i];
    }
  }
  printf("%d \t",smax);
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

  change(a,s);
}
