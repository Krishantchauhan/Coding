#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largestSubarray(vector<int> &arr, int k)
{
    int mx = 0;
    int sum = 0;
    int low = 0;
    int high = 0;

    while (high < arr.size())
    {
        sum += arr[high];
        if (sum < k)
            high++;
        else if (sum == k){
            mx = max(mx, high - low + 1);
            high++;
        }
        else
        {
            while (sum > k)
            {
                sum -= arr[low];
                low++;
            }
            high++;
        }
    }

    return mx;
}
int main()
{
    vector<int> arr;

    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);

    int k = 4;
    int result = largestSubarray(arr, k);
    cout << "Length of the largest subarray with sum at most " << k << " is: " << result << endl;

    return 0;
}
