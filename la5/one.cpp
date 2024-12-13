#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

void insertAtHead(Node *&head, int value)
{
    Node *newNode = new Node{value, NULL};
    Node *temp = head;
    newNode->next = head;
    head=newNode;
}
void displayNodeData(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ->";
        head = head->next;
    }
}
int main()
{
    Node *a = new Node{1, NULL};

    insertAtHead(a, 4);
    insertAtHead(a, 45);
    displayNodeData(a);
    return 0;
}