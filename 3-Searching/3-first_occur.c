#include <stdio.h>

int firstocc(int a[], int size, int key)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] > key)
            high = mid - 1;
        else if (a[mid] < key)
            low = mid + 1;
        else
        {
            if (mid == 0 || a[mid] != a[mid - 1])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[7] = {1, 20, 20, 20, 30, 30, 70};
    int size = sizeof(a) / sizeof(a[0]);
    int key = 30;
    int f = firstocc(a, size, key);
    printf("%d", f);

    return 0;
}