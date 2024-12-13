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
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int peek()
    {

        if (top < 0)
        {
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
    s.display();
    s.push(3);
    s.display();
    s.pop();
    s.display();
    return 0;
}
