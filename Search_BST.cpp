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

Node *Search(Node *root, int val)
{
    // Base condn
    if (root == NULL || root->data == val)
        return root;

    if (root->data < val)
    {
        return Search(root->right, val);
    }

    return Search(root->left, val);
}

int main()
{
    // (cond)?exp1:exp2;
    Node *root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right = new Node(15);
    root->right->left = new Node(13);
    root->right->right = new Node(17);

    cout << "\nBST Tree : \n";
    inOrder(root);
    (Search(root, 7) != NULL) ? cout << "Found\n" : cout << "Not Found";
    (Search(root, 20) != NULL) ? cout << "Found\n" : cout << "Not Found";

    return 0;
}