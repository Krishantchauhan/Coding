#include <stdio.h>

int peak(int a[], int n)
{
    if (n == 1)
        return a[0];
    if (a[n - 1] >= a[n - 2])
        return a[n - 1];
    if (a[0] >= a[1])
        return a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1] && a[i] >= a[i - 1])
            return a[i];
    }
    return 0;
}

int main()
{
    // int a[5] = {6, 7, 8, 20, 12};
    int a[3] = {1, 2, 3};
    int size = sizeof(a) / sizeof(a[0]);

    int store = peak(a, size);
    printf("%d", store);
}