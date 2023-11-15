#include <iostream>
#include <vector>

using namespace std;

int findFloor(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;
    int floor = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else if (nums[mid] > target)
        {
            floor = nums[mid];
            high = mid - 1;
        }
    }

    return floor;
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(8);
    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(12);
    nums.push_back(19);

    int target = 5;

    int floorElement = findFloor(nums, target);

    if (floorElement != -1)
    {
        cout << "Floor element of " << target << " is: " << floorElement << endl;
    }
    else
    {
        cout << "No floor element found for " << target << " in the array." << endl;
    }

    return 0;
}
