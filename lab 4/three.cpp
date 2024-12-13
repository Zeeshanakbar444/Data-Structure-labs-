#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
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
    a->next = new Node{5, NULL};
    a->next->next = new Node{45, NULL};
    a->next->next = new Node{90, NULL};
    
    displayNodeData(a);
    return 0;
}