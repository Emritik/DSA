#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

// single Node
class Node{
public:
    int data;
    Node *left, *right;
    // Constructor
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// pre-order traversing => Root -> Left -> Right
void preOrderDFS(Node *node){
    if(node == NULL) return;
    cout<<node->data<<" "; // ROOT
    preOrderDFS(node->left);
    preOrderDFS(node->right);
}

// Inorder Traversing => Left->Root-> Right
void inOrderDFS(Node *node){
    if(node == NULL) return;
    inOrderDFS(node->left);
    cout<<node->data<<" "; //ROOT
    inOrderDFS(node->right);
}

// PostOrder Traversing => Left -> Right -> root
void postOrderDFS(Node *node){
    if(node == NULL) return;
    postOrderDFS(node->left);
    postOrderDFS(node->right);
    cout<<node->data<<" ";// ROOT
}

// Level order traversing
void BFS(Node *root) {
    if(root == NULL) return;
    queue<Node*> q;
    // push,pop
    q.push(root);
    while(!q.empty()) {
        // front ->  remove
        Node* node = q.front();
        q.pop();
        cout<< node->data<< " ";// root
        if(node->left != NULL)
            q.push(node->left);
        if(node->right != NULL)
            q.push(node->right);
    }
}


int main() {
    // Create root node
    Node *root = new Node(5);
    root->left = new Node(10);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(2);
    root->right->left = new Node(3);
    root->right->right = new Node(4);

    cout<<"Pre-Order traversing: ";
    preOrderDFS(root);
    cout<<endl;

    cout<<"In-Order traversing: ";
    inOrderDFS(root);
    cout<<endl;      

    cout<<"Post-Order Traversing: ";
    postOrderDFS(root);
    cout<<endl;

    cout<<"Level Order Travesing: ";
    BFS(root);
    cout<<endl;

    return 0;
}
    //    5
    //  /   \
    //  10   15
    // /  \  / \
    // 1   2 3  5

// Traversing in Binary Tree -> 
// 1. DFS -> Preorder, Inorder, Post order
// 2. BFS -> Level order traversing