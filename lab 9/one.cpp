#include <iostream> 
using namespace std; 
 
struct Node { 
    int data; 
    Node* left; 
    Node* right; 
}; 
void inorderTraversal(Node* root) { 
    if (root == nullptr) return; 
    inorderTraversal(root->left); 
    cout << root->data << " "; 
    inorderTraversal(root->right); 
} 
int main() { 
    Node* root = new Node{10, nullptr, nullptr}; 
    root->left = new Node{5, nullptr, nullptr}; 
    root->right = new Node{20, nullptr, nullptr}; 
 
    inorderTraversal(root);  
    return 0; 
} 