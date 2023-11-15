
// Doing Using Min Heap and getting complexity NlogK;

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[7] = {6, 5, 3, 2, 8, 10, 9};
    int k = 3;

    priority_queue<int, vector<int>, greater<int>> pq;

    cout << "Array: ";
    for (auto i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;

    vector<int> ans;

    for (int i = 0; i < 7; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    for (int i = 0; i < 7; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
