#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter the column of an array\n");
    scanf("%d", &c);
    printf("Enter the rows of an array\n");
    scanf("%d", &r);
    printf("Enter the Elements First Array \n");
    int a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}