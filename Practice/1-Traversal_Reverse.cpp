#include <stdio.h>

int reverse(int a[],int s) {
  for(int i=s-1;i>=0;i--)
  {
    printf("%d",a[i]);
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

  reverse(a,s);
}
