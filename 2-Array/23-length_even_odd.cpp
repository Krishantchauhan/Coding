#include <stdio.h>
#include <algorithm>
int effi(int *a,int size){
  //efficient approach
  int curr=1,res=1;
  for(int i=1;i<size;i++)
  {
      if ((a[i] % 2 == 0 && a[i - 1] % 2 != 0) || (a[i] % 2 != 0 && a[i - 1]%2 == 0)){
        curr++;
        res=std::max(curr,res);
      }
      else
        curr=1;
  }
  return res;
}


int main()
{
  int i, s;
  printf("Enter the size of an array\n");
  scanf("%d", &s);
  int a[s];
  printf("Enter the %d Elements\n", s);
  for (i = 0; i < s; i++)
    scanf("%d", &a[i]);

  int res = 1,curr;
  for (int i = 0; i < s; i++)
  {
    curr = 1;
    for (int j = i + 1; j < s; j++)
    {
      if ((a[j] % 2 == 0 && a[j - 1] % 2 != 0) || (a[j] % 2 != 0 && a[j - 1]%2 == 0))
        curr++;
      else
        break;
    }
    res = std::max(res, curr);
  }
  printf("%d",res);

  printf("%d",effi(a,s));


}




