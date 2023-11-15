#include <stdio.h>
// Second Maxxx
int main()
{
    int a[] = {12, 34, 10, 6, 40};
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