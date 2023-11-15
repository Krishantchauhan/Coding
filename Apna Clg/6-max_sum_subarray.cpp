#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // your code goes here
    int a[] = {-1, 4, 6, 7, -4};
    int n = 5;

    int currsum = 0;
    int maxsum = 0;

    for (int i = 0; i < n; i++)
    {
        currsum += a[i];
        if (a[i] < 0)
            currsum = 0;
        maxsum = max(maxsum, currsum);
    }

    printf("%d", maxsum);
    return 0;
}