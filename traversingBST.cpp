// BST -> Root(left subtree < root) or Root (right subtree > root)
//      10
//     /  \
//    5    15
//   /   /  \
//  3    13  17
// BST Vs Binary tree
// Operations in binary seacrh Tree(BST)-> Insertion, Deletion, Searching, Traversing
//
// {3 5 7 10 13 15 17}
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

// Traversing
void inOrder(Node *node)
{
    // Base condn
    if (node == NULL)
        return;

    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

using namespace std;
int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right = new Node(15);
    root->right->left = new Node(13);
    root->right->right = new Node(17);

    cout << "\nBST elements are : \n";
    inOrder(root);

    return 0;
}