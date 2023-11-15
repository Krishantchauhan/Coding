#include <stdio.h>
// INsert of an array

// int main()
// {
//     int a[] = {12, 34, 10, 6, 40};
//     int n = sizeof(a) / sizeof(a[0]);

//     int pos, x;
//     printf("Position and value\n");
//     scanf("%d %d", &pos, &x);

//     for (int i = n - 1; i >= pos - 1; i--)
//         a[i + 1] = a[i];

//     a[pos - 1] = x;

//     for (int i = 0; i < n + 1; i++)
//         printf("%d  ", a[i]);
// }

// delection of an array

// int main()
// {
//     int a[] = {12, 34, 10, 6, 40};
//     int n = sizeof(a) / sizeof(a[1]);

//     int x = 6;
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         if (a[i] == x)
//             break;
//     }
//     printf(" %d ", i);
//     for (int j = i; j < n - 1; j++)
//     {
//         a[j] = a[j + 1];
//     }

//     for (int i = 0; i < n - 1; i++)
//         printf("%d  ", a[i]);
// }

// Second Maxxx
 int main()
 {
     int a[] = {39, 34, 10, 6, 40};
     int max = a[0];
     for (int i = 0; i < 5; i++)
     {
         if (a[i] > max)
         {
             max = a[i];
         }
     }
     int smax = a[0];
     for (int i = 0; i < 5; i++)
     {
         if (a[i] != max)
         {
             if (a[i] > smax)
             {
                 smax = a[i];
             }
         }
     }
     printf("%d  ", max);
     printf("%d  ", smax);
 }

// Reverse array

// int main()
// {
//     int a[] = {12, 34, 10, 6, 40};
//     int low = 0, high=4;
//     while (low < high)
//     {
//         int temp = a[low];
//         a[low] = a[high];
//         a[high] = temp;
//         low++;
//         high--;
//     }
//     for (int i = 0; i < 5; i++)
//         printf("%d ", a[i]);
// }

// move zeros to end
// void swap(int *i, int *count)
// {
//     int temp = *i;
//     *i = *count;
//     *count = temp;
// }
// int main()
// {
//     int a[] = {12, 20, 0, 6, 40};
//     int count = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (a[i] != 0)
//         {
//             swap(&a[i], &a[count]);
//             count++;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//         printf("%d ", a[i]);
// }

// rotate counter clock wise (left) by 1
//
// int main()
// {
//     int a[] = {12, 34, 10, 6, 40};
//     int s = sizeof(a) / sizeof(a[0]);
//     // printf("%d", s);

//     int low = a[0];
//       for(int i=0;i<s;i++)
//         a[i] = a[i+1];
//       a[s-1]=low;

//       for(int i=0;i<s;i++)
//       {
//          printf("%d ",a[i]) ;
//       }
// }

// rotate counter clock wise (left) by d times
// naive
// int main()
// {
//     int a[] = {1, 22, 3, 4, 5};
//     int s = sizeof(a) / sizeof(a[0]);
//     // printf("%d", s);
//     int n = 2;
//     while (n != 0)
//     {
//         int low = a[0];
//         for (int i = 0; i < s; i++)
//             a[i - 1] = a[i];
//         a[s - 1] = low;
//         n--;
//     }

//     for (int i = 0; i < s; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

//
// int main()
// {
//     int a[] = {1, 22, 3, 4, 5};
//     int s = sizeof(a) / sizeof(a[0]);
//     // printf("%d", s);
//     int n = 2;
//     while (n != 0)
//     {
//         int low = a[0];
//         for (int i = 0; i < s; i++)
//             a[i - 1] = a[i];
//         a[s - 1] = low;
//         n--;
//     }

//     for (int i = 0; i < s; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

// Leader Element
// naive
// int main()
// {
//     int a[] = {1, 120, 8, 9, 15};
//     int s = sizeof(a) / sizeof(a[0]);

//     for (int i = 0; i < s; i++)
//     {
//         int count = 0;
//         for (int j = i + 1; j < s; j++)
//         {
//             if (a[i] >= a[j])
//                 count = 1;
//             else{
//                 count=0;
//                 break;
//             }
//         }
//         if (count == 1 || i==s-1)
//             printf("%d ", a[i]);
//     }
// }

// Or naive
//  int main()
//  {
//      int a[] = {1, 120, 8, 9, 15};
//      int s = sizeof(a) / sizeof(a[0]);

//     for (int i = 0; i < s; i++)
//     {
//         int count = 0;
//         for (int j = i + 1; j < s; j++)
//         {
//             if (a[i] <= a[j]){
//                 count = 1;
//                 break;
//             }
//         }
//         if (count == 0 || i==s-1)
//             printf("%d ", a[i]);
//     }
// }

// efficient leder element
// but it print reverse
// basically start from right side
// int main()
// {
//     int a[] = {1, 120, 8, 91, 15};
//     int s = sizeof(a) / sizeof(a[0]);

//     int curr = a[s - 1];
//     printf("%d ", curr);
//     for (int i = s - 2; i > 0; i--)
//     {
//         if (a[i] > curr)
//         {
//             curr = a[i];
//             printf("%d ", a[i]);
//         }
//     }
// }