#include <stdio.h>

int change(int a[],int s,int pos,int ele)
{
  int temp=0;
  int i;
  for( i=s; i>=pos; i--)
        a[i] = a[i-1];
    a[i] = ele;

  for(int i=0;i<s;i++)
  {
    printf("%d",a[i]);
  }
}

int main()
  {
  int i,s;
  int pos,ele;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
    scanf("%d",&a[i]);

  printf("Enter the index\n");
  scanf("%d",&pos);

  printf("Enter the Elemet to Replace\n");
  scanf("%d",&ele);

  change(a,s,pos,ele);
}
