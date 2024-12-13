#include <iostream>
using namespace std;

class Stack
{
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
    }

    void push(int val)
    {

        arr[++top] = val;
    }

    void pop()
    {
        top--;
    }

    int peek()
    {

        return arr[top];
    }
};

int main()
{
    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);
    cout << "top element is " << s.peek() << endl;
    s.pop();
    cout << "top element is " << s.peek() << endl;
    s.pop();
    cout << "top element is " << s.peek() << endl;
    s.pop();
    cout << "top element is " << s.peek() << endl;

    return 0;
}
