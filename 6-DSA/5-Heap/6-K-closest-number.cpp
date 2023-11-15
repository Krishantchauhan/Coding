#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    priority_queue<pair<int, int> > pq;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int diff = abs(arr[i] - x);
        pq.push(make_pair(diff, arr[i]));
        if (pq.size() > k)
            pq.pop();
    }

    while (!pq.empty())
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);

    int k = 3;
    int x = 7;

    vector<int> closestElements = findClosestElements(arr, k, x);

    cout << "Closest Elements: ";
    for (int num : closestElements)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
