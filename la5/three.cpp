#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

void insertParNode(Node *&head, int value, int nodeVal)
{
    Node *newNode = new Node{value, NULL};
    Node *temp = head;
    while (temp->data != nodeVal)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
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
    a->next = new Node{4, NULL};
    a->next->next = new Node{44, NULL};

    insertParNode(a, 30, 1);
    displayNodeData(a);
    return 0;
}
