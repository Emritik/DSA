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
newNode -> next = *head;
 
if ( *head == NULL )  
{  
*head = newNode;  
return;  
}  
// head->1->2->3->4-> head last->next = newnode, newnode->next= head
while ( last -> next != *head )  
last = last -> next;  
last -> next = newNode;  
newNode->next = *head;
return;  
}  
// this function is insert the value at front
void insertatfirst(struct Node** head,int data){
    struct Node* newnode = new Node;
    // head -> 1->2 -> 3
    //newnode [data,address] = [data,head]
    newnode->data = data;
    newnode ->next = *head;
    // head[address (1)] = newnode[address]
    *head = newnode;
    // head -> 1-> 2 3 4 5 
    // 0
    // head -> 0 -> 1 ->2->3
}
// head->1->2->3->4->5->6->7->8->5->6->7

//head = data
// 1-2-3-NULL
//TO display the linked list elements
// errors while print the linkedlist
void display(Node *node){// traversing
   
    if(node == NULL){
        return;
    }
    Node* head = node->next;
    while(true){
        cout<<head->data<<" ";
        head = head->next;
        if(head == node->next)
            break;
    }
    cout<<endl;

}

int main(){
    struct Node* head = NULL;
    append(&head, 15);
    insertatfirst(&head,10);
    insertatfirst(&head,12);
    append(&head, 20);
    cout<<"Print Linked List: "<<endl;
    display(head);
    return 0;
}
//12 -> 10 ->  15 -> 20 -> NULL