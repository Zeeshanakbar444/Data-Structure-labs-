#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int count(Node *head)
{
    int countNode = 0;

    while (head != NULL)
    {
        countNode++;
        head = head->next;
    }
    return countNode + 1;
}
int main()
{
    Node *a = new Node{1, NULL};
    a->next = new Node{5, NULL};
    a->next->next = new Node{45, NULL};
    a->next->next = new Node{90, NULL};

    cout << "the total node is " << count(a);
    return 0;
}