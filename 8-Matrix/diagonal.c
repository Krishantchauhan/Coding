#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int low = 0, high = c - 1, temp = 0;
    // int a[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // int a[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r % 2 == 0)
    {
        low = -1;
        high = c;
    }
    if (r != c)
    {
        printf("Not Possible");
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            if (r % 2 == 0)
            {
                if (i < r / 2)
                {
                    low++;
                    high--;
                }
                if (i > r / 2)
                {
                    low--;
                    high++;
                }
                temp = a[i][low];
                a[i][low] = a[i][high];
                a[i][high] = temp;
            }
            if (r % 2 != 0)
            {
                temp = a[i][low];
                a[i][low] = a[i][high];
                a[i][high] = temp;
                if (i < r / 2)
                {
                    low++;
                    high--;
                }
                else
                {
                    low--;
                    high++;
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}