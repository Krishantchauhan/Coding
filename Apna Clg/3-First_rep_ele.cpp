#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // your code goes here
    int a[] = {1, 5, 3, 4, 3, 5, 6};
    int s = 7;

    const int N = 1e6 + 2;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < s; i++)
    {
        if (idx[a[i]] != -1)
            minidx = min(minidx, idx[a[i]]);
        else
        {
            idx[a[i]] = i;
        }
    }

    if (minidx != INT_MAX)
        printf("%d", minidx);
    else
        printf("-1");

    // cout<<mx<<" "<<endl;

    return 0;
}
