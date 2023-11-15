#include <stdio.h>
int main()
{
    int a[] = {12, 34, 10, 6, 40};
    int low = 0, high = 4;
    while (low != high)
    {
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
}