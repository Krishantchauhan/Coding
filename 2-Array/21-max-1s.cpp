#include <stdio.h>
#include <algorithm>

int main()
{
    int i, s;
    printf("Enter the size of an array\n");
    scanf("%d", &s);
    int a[s];
    printf("Enter the %d Elements\n", s);
    for (i = 0; i < s; i++)
        scanf("%d", &a[i]);
    int count = 0, res = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] != 1)
            count = 0;
        else
        {
            count++;
            res = std::max(res, count);
        }
    }

    printf("%d", res);
}