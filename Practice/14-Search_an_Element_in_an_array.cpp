#include <stdio.h>

int search(int a[],int s)
{
  int ele;
  printf("Enter a Element to Search \n");
  scanf("%d",&ele);

  for(int i=0;i<s;i++)
  {
    if (a[i]==ele)
      printf("%d",i);
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

    search(a,s);
}
