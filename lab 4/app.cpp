#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *a = new Node{1, NULL};
    a->next = new Node{5, NULL};
    a->next->next = new Node{45, NULL};
    return 0;
}