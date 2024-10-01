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

// Inorder Traversing => Left->Root-> Right
void inOrderDFS(Node *node){
    if(node == NULL) return;
    inOrderDFS(node->left);
    cout<<node->data<<" "; //ROOT
    inOrderDFS(node->right);
}

Node *insert(Node *root, int key) {
    // Empty Tree
    if(root == NULL) {
        root = new Node(key);
        return root;
    }

    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp->left ==NULL) {
            temp->left = new Node(key);
            break;
        }
        else{
            q.push(temp->left);
        }
        if(temp->right == NULL) {
            temp->right = new Node(key);
            break;
        }
        else {
            q.push(temp->right);
        }        
    }
    return root;
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

    cout<<"In-Order traversing before insertion : ";
    inOrderDFS(root);
    cout<<endl;    

    root = insert(root,6);

    cout<<"In-Order traversing after insertion : ";
    inOrderDFS(root);
    cout<<endl; 

    return 0;
}
//     1
//    / \
//   5   6
   
   

// Traversing in Binary Tree -> 
// 1. DFS -> Preorder, Inorder, Post order
// 2. BFS -> Level order traversing