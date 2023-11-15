#include <stdio.h>
int main()
{
    int a[100][100], i, j, r, c;
    printf("Enter the rows and column of an array\n");
    scanf("%d %d", &r, &c);
    printf("Enter the  Elements\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    if (r == 1)
    {
        for (int i = 0; i < c; i++)
            printf("%d ", a[0][i]);
    }
    else if (c == 1)
    {
        for (int i = 0; i < r; i++)
            printf("%d ", a[i][0]);
    }
    else
    {
        for (int i = 0; i < c; i++)
            printf("%d ", a[0][i]);
        for (int i = 1; i < r; i++)
            printf("%d ", a[i][c - 1]);
        for (int i = c - 2; i >= 0; i--)
            printf("%d ", a[r - 1][i]);
        for (int i = r - 2; i >= 1; i--)
            printf("%d ", a[i][0]);
    }
}