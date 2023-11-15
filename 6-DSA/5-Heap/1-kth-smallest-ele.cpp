#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[6] = {7, 10, 4, 3, 20, 15};
    int k = 3;

    priority_queue<int> pq;

    cout << "Array: ";
    for (auto i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }

    cout << pq.top();

    return 0;
}
