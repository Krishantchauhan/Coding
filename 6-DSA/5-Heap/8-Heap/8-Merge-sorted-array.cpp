// C++ program to demonstrate the use of priority_queue
#include <iostream>
#include <queue>
using namespace std;

// driver code
int main()
{
    // int arr[6] = {10, 2, 4, 8, 6, 9};

    int arr[][4] = {{2, 6, 12, 34},
                    {1, 9, 20, 1000},
                    {23, 34, 90, 2000}};

    int K = sizeof(arr) / sizeof(arr[0]);

    // defining priority queue
    priority_queue<int, vector<int>, greater<int> > pq;

    // printing array
    cout << "Array: ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    // pushing array sequentially one by one

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            pq.push(arr[i][j]);
        }
    }

    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ' ';
    }

    return 0;
}
