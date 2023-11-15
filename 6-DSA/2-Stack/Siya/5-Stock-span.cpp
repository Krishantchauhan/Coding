// Using  NGL

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

void stock(std::vector<int> arr, int n)
{
    vector<int> ans;
    stack<pair<int, int>> st;

    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            ans.push_back(-1);
        else if (st.size() > 0 && st.top().first > arr[i])
            ans.push_back(st.top().second);
        else if (st.size() > 0 && st.top().first <= arr[i])
        {
            while (st.size() > 0 && st.top().first <= arr[i])
                st.pop();
            if (st.empty())
                ans.push_back(-1);
            else
                ans.push_back(st.top().second);
        }
        st.push(make_pair(arr[i], i));
    }

    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = i - ans[i];
    }

    printf("\n\n Stock Span \n\n");
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> a;
    a.push_back(100);
    a.push_back(80);
    a.push_back(60);
    a.push_back(70);
    a.push_back(60);
    a.push_back(75);
    a.push_back(85);
    int size = a.size();

    printf("Original Array \n");

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    stock(a, size);
}