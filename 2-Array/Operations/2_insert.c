#include <stdio.h>
int main()
{
    int a[] = {10, 20, 50, 60, 70};
    int n = sizeof(a) / sizeof(a[0]);

    int pos, x;
    printf("Position and value\n");
    scanf("%d %d", &pos, &x);

    for (int i = n - 1; i >= pos - 1; i--)
        a[i + 1] = a[i];

    // a[pos - 1] = x;
    n++;

    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
}
