#include <iostream>
using namespace std;
class Queue
{
    int front = -1;
    int rear = -1;
    int arr[5];

public:
    void enqueu(int val)
    {
        if (rear < 4)
            arr[++rear] = val;
        else
            cout << "queue overflow";
    }
    void dequeu()
    {
        if (front == rear)
            cout << "queue Underflow";
        else
            front++;
    }
    int displayFront()
    {
        if (front != rear)
            return arr[front + 1];
    }
    void display()
    {
        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue q;
    q.enqueu(5);
q.display();
    q.enqueu(2);
q.display();

    q.dequeu();
    q.dequeu();
    q.display();
   
}