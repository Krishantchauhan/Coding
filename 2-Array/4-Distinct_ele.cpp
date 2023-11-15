#include <stdio.h>

int check(int a[],int s)
{
  int count=0;
  bool repeat = true;
  for(int i=0;i<s;i++)
  {
    repeat = true;
    for(int j=i-1;j>=0;j--)
    {
      if (a[i]==a[j])
      {
        repeat = false;
        break;
      }
    }
    if (repeat==true)
      count++;
  }
  return count;
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

    int x =check(a,s);
  printf("%d",x);

  return 0;
}
