#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left,*right, *parent;
    string color;

    Node(int value) {
        data = value;
        left = right = parent = nullptr;
        color = "Red";
    }
};

void Inorder(Node *root) {
    if (root != nullptr) {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}

void leftRotation(Node* x) {
    // temp = a;
    // a = b;
    // b = temp;
    Node* y = x->right;
    x->right = y->left; 

    if(y->left != NULL) {
        y->left->parent = x;
    }
    y->parent  = x->parent;
    if(x->parent == NULL) {
        root = y;
    }
    else if(x == x->parent->left) { // example
        x->parent->left = y;
    }
    else {
        x->parent->right = y;
    }
    y->left = x;
    x->parent = y;
}

void rightRotation(Node* x) {
    Node* y = x->left;
    x->left = y->right;
    if(y->right != NULL) {
        y->right->parent = x;
    }
    y->parent = x->parent;
    if(x->parent == NULL) {
        root = y;
    }
    else if(x == x->parent->right) { //example
        x->parent->right = y;
    }
    else {
        x->parent->left = y;
    }
    y->right = x;
    x->parent = y;
}

void insert() {
    Node* newNode = new Node(key);
    newNode->left = NULL;
    newNode->right = NULL;

    Node* parent = NULL;
    Node* current = root;
    while(current  != NULL) {
        parent = current;
        if(newNode->data < current->data) {
            current  = current->left;
        }
        else {
            current = current->right;
        }
    }
    newNode->parent  = parent;
    if(newNode->parent == NULL) {
        newNode->color = "Black";
        return;
    }

    if(newNode->parent->parent  == NULL) {
        newNode->color = "Red";
        return;
    }
}

int main() {
    
    return 0;
}