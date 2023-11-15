#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> maxInSubarraysOfSizeK(vector<int> &arr, int k)
{
    int n = arr.size();
    deque<int> q;
    vector<int> ans;
    int low = 0, high = 0;

    while (high < n)
    {
        while (!q.empty() && q.back() < arr[high])
            q.pop_back();

        q.push_back(arr[high]);
        if (high - low + 1 < k)
            high++;
        else if (high - low + 1 == k)
        {
            ans.push_back(q.front());
            if (q.front() == arr[low])
                q.pop_front();
            low++;
            high++;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = maxInSubarraysOfSizeK(arr, k);

    cout << "Maximum elements in subarrays of size " << k << " are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
