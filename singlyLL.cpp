#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};


// this function insert into last
void append ( struct Node** head, int data )  
{  
struct Node* newNode = new Node;  
   
struct Node *last = *head;  
newNode -> data = data;  
newNode -> next = NULL;
// 0 1 2 3 4 -> newnode
// 0
if ( *head == NULL )  
{  
*head = newNode;  
return;  
}  
// 1 2 3 4 5 6 -> null
while ( last -> next != NULL )  // postion newnode -> next = last->next // last->next = newnode
    last = last -> next;  // 1 2 3 -> 4 -> 5 6
last -> next = newNode;  
return;  
}

// this function is insert the value at front
void insertatfirst(struct Node** head,int data){
    struct Node* newnode = new Node;
    // head -> 1->2 -> 3
    //newnode [data,address] = [data,head]
    newnode->data = data;
    newnode ->next = *head;
    // 0 1 2 4 5 6->null// newnode-> 0
    // head[address (1)] = newnode[address]
    *head = newnode;
    // newnode -> head -> null
    // head -> 1-> 2 3 4 5 
    // 0
    // head -> 0 -> 1 ->2->3

}

//head = data
// 1-2-3-NULL
//TO display the linked list elements
void display(struct Node *node){// traversing
    while(node != NULL){
        cout<<node->data<<"-->";
        node = node->next;
    }
    if(node == NULL){
        cout<<"NULL"<<endl;
    }

}

int main(){
    struct Node* head = NULL;
    append(&head, 15);
    insertatfirst(&head,10);
    insertatfirst(&head,12);
    append(&head, 20);
    cout<<"Original Linked List: "<<endl;
    display(head);
    return 0;
}
//12 -> 10 ->  15 -> 20 -> NULL