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
    int left = 0, top = 0, right = c - 1, bottom = r - 1;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;
        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;
        for (int i = right; i >= left; i--)
            printf("%d ", a[bottom][i]);
        bottom--;
        for (int i = bottom; i >= top; i--)
            printf("%d ", a[i][left]);
        left++;
    }
}