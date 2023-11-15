#include <stdio.h>

int main()
{
    int s = 7;
    int a[7] = {1, 6, 10, 6, 4, 88, 1};
    // int a[4] = {30, 10, 8, 2};
    int max = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] > a[max])
            max = i;
    }
    int diff = 0, min = 0;
    for (int i = 0; i <= max; i++)
    {
        if (a[min] > a[i])
            min = i;
    }

    diff = a[max] - a[min];
    printf("diff is %d ", diff);
}
