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
int findHeight(Node *root)
{
    if (root == nullptr)
        return -1;

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
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

    cout << "height"  << findHeight(root);
    // postOrder(root);
    return 0;
}