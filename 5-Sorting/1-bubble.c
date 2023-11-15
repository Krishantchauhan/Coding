#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int s = 7;
    int a[7] = {1, 63, 10, 6, 47, 88, 3};

    // int s = 25;
    // int a[s];
    // for (int i = 0; i < s; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    for (int i = 0; i < s - 1; i++)
    {
        for (int j = 0; j < s - 1; j++)
        {
            // printf("%d", j);
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
    }

    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
}