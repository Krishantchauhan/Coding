#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

void ngr(std::vector<int> arr, int n)
{
    std::vector<int> ans;
    std::stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {
        if (st.empty())
            ans.push_back(-1);
        else if (st.size() > 0 && st.top() > arr[i])
            ans.push_back(st.top());
        else if (st.size() > 0 && st.top() <= arr[i])
        {
            while (st.size() > 0 && st.top() <= arr[i])
                st.pop();
            if (st.empty())
                ans.push_back(-1);
            else
                ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    printf("\n\nNGR\n");
    for (auto i : ans)
        printf("%d ", i);
}

int main()
{
    std::vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(2);
    a.push_back(4);
    int size = a.size();

    printf("Original Array \n");
    for (auto i : a)
        printf("%d ", i);

    ngr(a, size);
}