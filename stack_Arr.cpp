#include <bits/stdc++.h>
using namespace std;
// stack - LIFO
// push ,pop, empty, size, top
#define MAX 1000 // macro functions

class Stack
{
    int top;

public:
    int a[MAX];
    Stack() { top = -1; }

    bool push(int x);
    int pop();
    int peek(); // top
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
        return false;
    } // n  // 0 n-1
    else
    {
        a[++top] = x; // ++top 0
        cout << x << "  Pushed!!" << endl;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top];
        top--;// 0 1 2 3 4 5 top = 5
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl;

    return 0;
}