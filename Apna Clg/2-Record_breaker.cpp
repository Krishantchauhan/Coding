#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a[] = {1, 2, 0, 7, 2, 0, 2, 2};
    int s = 8;

    int ans = -1;
    int mx = -1;

    for (int i = 0; i < s; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
            ans++;
        else
            mx = max(mx, ans);
    }

    cout << mx << " " << endl;

    return 0;
}
