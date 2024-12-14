#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
void postOrder(Node *root)
{
    if (root == nullptr)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
void preorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node *root = new Node{10, nullptr, nullptr};
    root->left = new Node{5, nullptr, nullptr};
    root->right = new Node{20, nullptr, nullptr};
      root->left->left = new Node{3, nullptr, nullptr};
    root->left->right = new Node{7, nullptr, nullptr};
    root->right->left = new Node{15, nullptr, nullptr};
    root->right->right = new Node{25, nullptr, nullptr};

    preorder(root);
    postOrder(root);
    return 0;
}