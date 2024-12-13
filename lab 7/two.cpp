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
        arr[++rear] = val;
    }
    void dequeu()
    {
        front++;
    }
    int displayFront()
    {
        if (front != rear)
            return arr[front + 1];
    }
};
int main()
{
    Queue q;
    q.enqueu(5);

    q.enqueu(2);

    q.enqueu(3);

    q.enqueu(5);

    q.enqueu(9);
    q.dequeu();
    cout << "front is " << q.displayFront() << endl;

    q.dequeu();
    cout << "front is " << q.displayFront() << endl;

    q.dequeu();
    cout << "front is " << q.displayFront() << endl;
}