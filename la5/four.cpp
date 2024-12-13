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
    head = newNode;
}
void insertAtTail(Node *&head, int value)
{
    Node *newNode = new Node{value, NULL};
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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

    insertAtTail(a, 4);
    insertAtTail(a, 45);
    insertAtHead(a, 55);
    insertAtHead(a, 33);
    displayNodeData(a);
    return 0;
}
