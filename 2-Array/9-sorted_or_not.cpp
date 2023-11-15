#include <stdio.h> 

int main() 
{
  int i,s;  
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  int a[s];
  printf("Enter the %d Elements\n",s);
  for(i=0;i<s;i++)
    scanf("%d",&a[i]);

    int flag=0;
    for(int i=1;i<s;i++)
    {
        if(a[i]<=a[i-1]){
            flag=0;
            break;
        }
        else
            flag=1;
    }

    if(flag==1)
        printf("Sorted\n");
    else
        printf("Unsorted\n");


}