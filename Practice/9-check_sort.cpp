#include <stdio.h>

int check(int a[],int s)
{
  int c;
  for(int i=1;i<s;i++)
  {
    if (a[i]<a[i-1])
      c=0;
    else
      c=1;
  }
  if (c==0)
    printf("UnSorted \n");
  else
    printf("Sorted \n");

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

  check(a,s);
}
