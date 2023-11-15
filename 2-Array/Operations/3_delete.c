#include <stdio.h>
int main()
{
    int a[] = {10, 30, 20, 60, 40};
    int n = sizeof(a) / sizeof(a[1]);

    int x = 20;
    int i;

    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == x)
            break;
    }

    if (i == n)
        printf("Not found\n");
    else
    {
        for (int j = i; j < n - 1; j++)
            a[j] = a[j + 1];
        for (int i = 0; i < n - 1; i++)
            printf("%d  ", a[i]);
    }
}