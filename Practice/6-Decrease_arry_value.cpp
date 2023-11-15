#include <stdio.h>

int change(int a[],int s)
{
  int temp;

  for(int i=0;i<s;i++)
  {
    temp=a[i]-1;
    a[i]=temp;
  }

  for(int i=0;i<s;i++)
  {
    printf("%d \t",a[i]);
  }
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
