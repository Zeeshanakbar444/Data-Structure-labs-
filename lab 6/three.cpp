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
        if (top >= 4)
        {
            cout << "Stack overflow" << endl;
        }
        arr[++top] = val;
    }

    void pop()
    {
        if (top < 0)
        {
            cout << "Stack underflow" << endl;
        }
        top--;
    };
int peek(){


    if (top < 0) { 
            cout << "Stack is empty, no top element" << endl;
            return 0; 
        }
        return arr[top];
    }
};

int main()
{
    Stack s;
    s.push(2);
    s.push(3);
    cout << "top element is " << s.peek() << endl;
    s.pop();
    cout << "top element is " << s.peek() << endl;

    return 0;
}
