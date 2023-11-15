#include <stdio.h>
int main()
{
    int a[100][100], i, j, r;
    printf("Enter the rows of an array\n");
    scanf("%d", &r);
    printf("Enter the  Elements\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < r; j++)
                printf("%d ", a[i][j]);
        }
        else
        {
            for (int j = r - 1; j >= 0; j--)
                printf("%d ", a[i][j]);
        }
    }
}