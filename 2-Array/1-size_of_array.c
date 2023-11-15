#include <stdio.h>

void main()
{
  double arr[10] = {10, 20, 30, 40, 50};

  int a = sizeof(arr) / sizeof(arr[0]);
  // sizeof(arr) return 4*5=20
  //  sizeof(arr[0]) return 4bytes
  // Then 20/4==5

  printf("The size is = %d \n", a);
}
