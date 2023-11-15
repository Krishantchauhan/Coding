// stack nearest greater to Left
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
void ngr(vector<int> arr, int n)
{
    vector<int> ans;
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        if (st.empty())
            ans.push_back(-1);
        else if (!st.empty() && st.top() > arr[i])
            ans.push_back(st.top());
        else if (!st.empty() && st.top() <= arr[i])
        {
            while (!st.empty() && st.top() <= arr[i])
                st.pop();
            if (st.empty())
                ans.push_back(-1);
            else
                ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    printf("\n\nNGL\n");
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