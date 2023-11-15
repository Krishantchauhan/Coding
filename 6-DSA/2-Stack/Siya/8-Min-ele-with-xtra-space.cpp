#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

stack<int> s1;
stack<int> s2;

void push(int a)
{
    s1.push(a);
    if (s2.size() == 0 || s2.top() >= a)
        s2.push(a);
    // return;
}

void pop()
{
    if (s1.size() == 0)
        cout << "-1";
    int ans = s1.top();
    s1.pop();
    if (s2.top() == ans)
        s2.top();
    cout << ans;
}

void min()
{
    if (s2.size() == 0)
        cout << "-1";
    cout << s2.top();
}

int main()
{

    push(18);
    push(19);
    push(29);
    // min();
    push(15);
    push(16);
    push(9);
    pop();
    // min();
}