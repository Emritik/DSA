// BST -> AVL Tree/RB Tree

// leftsubtree<Root<RightSubtree(Insertion, DEletion, Searching and Traversing);

// 1 2 3 4 5 6 7 = Inorder Traversal
//             1
//              \
//               2
//                 \
//                  3
//                   \
//                    4
//                     \ 
//                      5
//                       \
//                        6
//                         \ 
//                          7
                            //O(n),O(logn) -> O(n!) = 7sec = 720 * 7
                         //Right Swed Tree
// A B C D E F G H I ....... X Y Z
// AVL Tree(Self Balence Tree,Balance BST) -> AVL Tree
// INSERT, DELETE -> Rotations ()
// Search
// Balance Factor -> -1 , 0 , 1(-2,-3,2 ,4)
// Balance Factor = Height(left Tree) - Height(Right Tree) 

//      10 -> 2
//     /  \
//    5    15  -> 1
//   /   /  \
//  3   13  17 -> 0
// /
//1

// Insertion Rotation Tech ->(L-> Left, R-> Right)
// LL Rotation
// LR Rotation
// RR Rotation
// RL Rotation


// steps for insertion program
// Create BST - complete
// traversing -> complete
// Insertion
// Balance factor -> complete
// Rototaion 

#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
    int data; 
    Node *left; 
    Node *right; 
    int height; 

    Node(int k) { 
        data = k; 
        left = nullptr; 
        right = nullptr; 
        height = 1; 
    }
}; 

int height(Node *N) { 
    if (N == nullptr) 
        return 0; 
    return N->height; 
} 

Node *rightRotate(Node *y) { 
    Node *x = y->left; 
    Node *T1 = x->right; 

    x->right = y; 
    y->left = T1; 

    y->height = 1 + max(height(y->left), 
                    height(y->right)); 
    x->height = 1 + max(height(x->left), 
                        height(x->right)); 

    return x; 
} 

Node *leftRotate(Node *x) { 
    Node *y = x->right; 
    Node *T1 = y->left; 

    y->left = x; 
    x->right = T1; 

    x->height = 1 + max(height(x->left), 
                        height(x->right)); 
    y->height = 1 + max(height(y->left), 
                        height(y->right)); 

    return y; 
} 

int getBalance(Node *N) { 
    if (N == nullptr) 
        return 0; 
    return height(N->left) - height(N->right); 
} 

Node* insert(Node* node, int value) { 
  
    if (node == nullptr) 
        return new Node(value); 

    if (value < node->data) 
        node->left = insert(node->left, value); 
    else if (value > node->data) 
        node->right = insert(node->right, value); 
    else  
        return node; 

    node->height = 1 + max(height(node->left),
                           height(node->right)); 

    int balance = getBalance(node); 


    // Left Left Case 
    if (balance > 1 && value < node->left->data) 
        return rightRotate(node); 

    // Right Right Case 
    if (balance < -1 && value > node->right->data) 
        return leftRotate(node); 

    // Left Right Case 
    if (balance > 1 && value > node->left->data) { 
        node->left = leftRotate(node->left); 
        return rightRotate(node); 
    } 

    // Right Left Case 
    if (balance < -1 && value < node->right->data) { 
        node->right = rightRotate(node->right); 
        return leftRotate(node); 
    } 
 
    return node; 
} 


void InOrder(Node *root) { 
    if (root != nullptr) { 
        InOrder(root->left); 
        cout << root->data << " "; 
        InOrder(root->right); 
    } 
} 

int main() { 
    Node *root = nullptr; 
    root = insert(root, 1); 
    root = insert(root, 2); 
    root = insert(root, 3); 
    root = insert(root, 4); 
    root = insert(root, 5); 
    root = insert(root, 6); 

    cout << "InOrder traversal : \n"; 
    InOrder(root); 
    
    return 0; 
} 
