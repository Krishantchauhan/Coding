#include <stdio.h>

int check(int a[],int s)
{
  int odd=0;
  int even=0;

  for(int i=0;i<s;i++)
  {
    if (a[i]%2==0)
      even++;
    else
      odd++;
  }
  printf("%d",even);
  printf("%d",odd);
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
