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

int lasttocc(int a[], int size, int key)
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
            if (mid != size - 1 || a[mid] != a[mid + 1])
                return mid;
            else
                low = mid - 1;
        }
    }
    return -1;
}

int countfun(int a[], int size, int key)
{
    int first = firstocc(a, size, key);
    if (first == -1)
        return 0;
    else
        return (lasttocc(a, size, key) - first + 1);
    // count = last - first;
    // return count;
}

int main()
{
    int a[7] = {1, 20, 20, 20, 30, 30, 70};
    int size = sizeof(a) / sizeof(a[0]);
    int key = 20;

    int count = countfun(a, size, key);
    printf("%d", count);

    return 0;
}