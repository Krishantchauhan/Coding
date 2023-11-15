#include <stdio.h>
int main()
{
    int a[] = {1, 2, 1, 2, 5};
    int n = 5;

    const int N = 1e6 + 2;
    int idx[N] = {0};

    for (int i = 0; i < n; i++)
    {
        idx[a[i]]++;
    }

    for (int i = 0; i < N; i++)
    {
        if (idx[i] == 1)
        {
            printf("%d", i);
            break;
        }
    }
    // printf("%d", ans);
    // return 0;
}