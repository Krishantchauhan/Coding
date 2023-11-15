int binse(int a[], int size, int key)
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