// Using  NSL and NSR
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int calc(std::vector<int> arr, int n)
{

    // NSL
    vector<int> left;
    stack<pair<int, int>> st1;

    for (int i = 0; i < n; i++)
    {
        if (st1.empty())
            left.push_back(-1);
        else if (st1.size() > 0 && st1.top().first < arr[i])
            left.push_back(st1.top().second);
        else if (st1.size() > 0 && st1.top().first >= arr[i])
        {
            while (st1.size() > 0 && st1.top().first >= arr[i])
                st1.pop();
            if (st1.empty())
                left.push_back(-1);
            else
                left.push_back(st1.top().second);
        }
        st1.push(make_pair(arr[i], i));
    }

    // For NSR
    vector<int> right;
    stack<pair<int, int>> st2;

    for (int i = n - 1; i >= 0; i--)
    {
        if (st2.empty())
            right.push_back(n);
        else if (st2.size() > 0 && st2.top().first < arr[i])
            right.push_back(st2.top().second);
        else if (st2.size() > 0 && st2.top().first >= arr[i])
        {
            while (st2.size() > 0 && st2.top().first >= arr[i])
                st2.pop();
            if (st2.empty())
                right.push_back(n);
            else
                right.push_back(st2.top().second);
        }
        st2.push(make_pair(arr[i], i));
    }

    reverse(right.begin(), right.end());

    // Find width
    vector<int> width(n);
    cout << "\nWidth :- ";
    for (int i = 0; i < n; i++)
    {
        width[i] = right[i] - left[i] - 1;
        cout << width[i] << " ";
    }

    // // Finding  Area
    vector<int> area(n);
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        area[i] = arr[i] * width[i];
        mx = max(mx, area[i]);
    }
    // cout << "\nMax Area is :- ";
    // cout << mx << " ";

    return mx;
}

void rectangle(vector<vector<int>> &arr, int n, int m)
{
    vector<int> v(m);
    int mx = calc(arr[0], m);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
                v[j] = 0;
            else
                v[j] = v[j] + arr[i][j];
        }
        mx = max(calc(v, v.size()), mx);
    }
    cout << mx;
}

int main()
{
    vector<vector<int>> a{
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0}};

    int rows = a.size();
    int cols = a[0].size();

    cout << "Array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    rectangle(a, rows, cols);
    // cout << "Max Area: " << result << endl;
}