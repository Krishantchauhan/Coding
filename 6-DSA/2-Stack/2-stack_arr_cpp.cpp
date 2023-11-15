#include <stdio.h>
#include <iostream>

struct stack
{
    int *arr;
    int cap;
    int top;
    stack(int x)
    {
        cap = x;
        arr = new int[cap];
        top = -1;
    }

    void push(int data)
    {
        if (top == cap - 1)
            printf("Overflow");
        else
        {
            top++;
            arr[top] = data;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            int res = arr[top];
            top--;
            return res;
        }
    }

    int peek()
    {
        if (top == -1)
        {
            return -1;
        }
        return arr[top];
    }

    int sizee()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    stack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);

    printf("%d\n", s.pop());
    printf("%d\n", s.sizee());
    printf("%d\n", s.peek());
    printf("%d\n", s.isEmpty());
}