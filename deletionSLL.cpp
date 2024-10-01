// 1 remove from start
// random postion
// last remove
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    // Node(int data){
    //     data = data;
    //     next = NULL;
    // }
};

void display(Node* head){// traversing
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;// 1 2 3 4 5 -> null
    }
    if(head == NULL){
        cout<<"NULL"<<endl;
    }
}

void append ( struct Node** head, int data )  
{  
struct Node* newNode = new Node;  
   
struct Node *last = *head;  
newNode -> data = data;  
newNode -> next = NULL;  
if ( *head == NULL )  
{  
*head = newNode;  
return;  
}  
while ( last -> next != NULL )  
last = last -> next;  
last -> next = newNode;  
return;  
}  

// this function is insert the value at front
void insertatfirst(struct Node** head,int data){
    struct Node* newnode = new Node;
    newnode->data = data;
    newnode ->next = *head;
    *head = newnode;

}
// head -> NULL

Node* removeatbegin(struct Node* head){
    // Base case if linked list is empty
    if (head == nullptr)
        return nullptr;
  
    // Change the head pointer to the next node
    // and free the original head 
    Node* temp = head;
    head = head->next; // head -> 1 2 3 4 5 6
    delete temp;
  
    // Return the new head
    return head;

// [ 1 3 4 5]
    // head -> 1 -> 2 - > 3->4->5->NULL
    // temp = head

}

Node* deleteNode(Node* head, int position){

    if(head == NULL){
        return NULL;
    }// Base condition

    Node* temp = head;
    Node* prev;
    // 1 2->3-> 4 5 -> null
    // case 1: delete at position 1;
    if(position == 1){
        head = temp->next;// head-> 2
        delete temp;
        return head;
    }

   // case 2: node delete in middle
   for(int i=1;i!= position;i++){
    prev = temp;
    temp= temp->next;
   }
   // 0 1 2 -> 4 5 -> null
   if(temp != NULL){
    prev->next = temp->next;
    free(temp);
   }
   else{
    cout<<"Elment not found"<<endl;
   }
   return head;
}

Node* removeaslast(struct Node* head){
    //if no element in the list
    if(head == NULL){
        return NULL;  
    }
    // only one element in the list
    // head-> 1 -> null
    if(head ->next == NULL){
        delete head;
        return NULL;
    }
    // more than one elment in the list
    Node* temp = head;
    while(temp->next->next != NULL){
        temp= temp->next;
    }
    // 0 1 2 4 5 -> null
    delete( temp->next);
    // 1 2 3 4 -> NULl
    temp->next = NULL;

    return head;
    }

int main() {
    // Node* head = new Node(1);
    // Node->next = new Node(2);
    // Node->next->next = new Node(3);
    // Node->next->next->next = new Node(4);
    // Node->next->next->next->next = new Node(5);

    struct Node* head = NULL;
    append(&head, 3);
    insertatfirst(&head,2);
    insertatfirst(&head,1);
    append(&head, 4);
    append(&head, 5);
    cout<<"original Linked List: "<<endl;
    display(head);
    int position = 2;
    //deleteNode(head,position);
    removeaslast(head);
    cout<<"After Deleting the node: "<<endl;
    display(head);


    

    return 0;
}