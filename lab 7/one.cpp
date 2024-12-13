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
    cout << "front is " << q.displayFront() << endl;

    q.enqueu(2);
    cout << "front is " << q.displayFront() << endl;

    q.enqueu(3);
    cout << "front is " << q.displayFront() << endl;

    q.enqueu(5);
    cout << "front is " << q.displayFront() << endl;

    q.enqueu(9);
    cout << "front is " << q.displayFront() << endl;
}