#include <stdio.h>

// int binse(int a[], int size, int key)
// {
//   int low = 0, high = size - 1;
//   while (low <= high)
//   {
//     int mid = (low + high) / 2;
//     if (key == a[mid])
//       return mid + 1;
//     else if (a[mid] > key)
//       high = mid - 1;
//     else
//       low = mid + 1;
//   }
//   return -1;
// }

void bs()
{
  int a[7] = {10, 20, 30, 40, 50, 60, 70};
  int size = sizeof(a) / sizeof(a[0]);
  int key = 600, low = 0, high = size - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (key == a[mid])
    {
      printf("KEY %d is present at %d", key, mid + 1);
      break;
    }
    else if (a[mid] > key)
      high = mid - 1;
    else
      low = mid + 1;
  }
  if (low > high)
    printf("KEY %d not found", key);
}

int main()
{
  // int a[7] = {10, 20, 30, 40, 50, 60, 70};
  // int size = sizeof(a) / sizeof(a[0]);
  // int key = 50;

  // int ab = binse(a, size, key);
  // printf("%d", ab);

  bs();
}
