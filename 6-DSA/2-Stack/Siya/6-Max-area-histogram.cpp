// Using  NSL and NSR
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void histogram(std::vector<int> arr, int n)
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

    //     cout<<"\n";
    //   for(int i=0;i<n;i++)
    //   {
    //       cout<<left[i]<<" ";
    //   }
    //   cout<<"\n";
    //   for(int i=0;i<n;i++)
    //   {
    //       cout<<right[i]<<" ";
    //   }

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
    cout << "\nMax Area is :- ";
    cout << mx << " ";
}

int main()
{
    vector<int> a;
    a.push_back(6);
    a.push_back(2);
    a.push_back(5);
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    a.push_back(6);
    int size = a.size();

    printf("Array :- ");

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    histogram(a, size);
}