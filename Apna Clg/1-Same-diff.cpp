#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a[] = {10, 7, 4, 6, 8, 10, 11};
    int s = 7;

    int ans = 2;
    int curr = 2;
    int j = 2;
    int pd = a[1] - a[0];
    while (j < s)
    {
        if (pd == a[j] - a[j - 1])
            curr++;
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(curr, ans);
        j++;
    }

    cout << ans << " " << endl;

    return 0;
}
