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

// Insertion
Node *insert(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);

    // if its already present in the given BST
    if (root->data == val)
        return root;

    if (root->data < val)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        root->left = insert(root->left, val);
    }

    return root;
}

using namespace std;
int main()
{
    Node *root = new Node(10);
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 17);
    root = insert(root, 31);

    cout << "Before the insertion : \n";
    inOrder(root);
    root = insert(root, 1);
    // root = delNode(root,1);

    cout << "\nAfter the insertion : \n";
    inOrder(root);

    return 0;
}