#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarrayOfSizeK(vector<int>& nums, int k) {
    int low = 0, high = 0, mx = -1, sum = 0;
    while (high < nums.size()) {
        sum += nums[high];
        if (high - low + 1 < k) {
            high++;
        }
        if (high - low + 1 == k) {
            mx = max(mx, sum);
            sum -= nums[low];
            high++;
            low++;
        }
    }
    return mx;
}

int main() {
    vector<int> nums ;
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(8);
    nums.push_back(2);
    nums.push_back(9);
    nums.push_back(1);
    int k = 3;

    int maxSum = maxSumSubarrayOfSizeK(nums, k);
    cout << "Maximum sum of a subarray of size " << k << " is: " << maxSum << endl;

    return 0;
}
