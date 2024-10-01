#include <iostream>
using namespace std;
// data , forward pointer (next)
// data , reverse pointer(*prev), forward pointer(*next)
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }    
};
// Insert at begin
void insertatBeginning(Node*& head,int data){
    Node* newnode = new Node(data);// class Node -> object
    // newNode =>  Null <- 25 -> Null
    if(head==NULL){
        head = newnode;
        return;
    }
    // Null<-25 -> head newnode<-head->Null
    newnode->next = head;
    head->prev = newnode;
    head=newnode;

}

// Insert at end
void insertAtEnd(Node*& head,int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        return;
    }
    // head 1 2 3 4 5 <-6->NULL
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    // 1 2 3 4 5 <-6->newnode // temp<-newnode
    temp->next = newnode;
    newnode->prev = temp;
}

// insert at positions
void insertAtPosition(Node*& head, int data, int position){
    if(position == 1){
        insertatBeginning(head,data);
        return;
    }
    Node* newnode = new Node(data);
    Node* temp = head;
    for(int i=1;temp != NULL && i<position - 1 ; i++){
        temp = temp->next;
    }   // 3->  newnode <-5
    // newnode -> temp->next == 5
    //newnode -> prev  = temp
    // temp->next(5) =  newnode;
    // head 1 2 3-> <-5 6 7
    newnode->next = temp->next;
    newnode -> prev = temp;
    temp->next = newnode;

}
// forward traversing
void forwardTraverse(Node* head){
    Node* temp = head ;
    cout<<"Forward Traversing->";
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"Null";
}
void ReverseTraversing(Node* head){
    Node* temp = head ;
    while(temp->next != NULL){
        temp = temp->next;

    }
    while(temp != NULL){
        cout<<temp->data<< " ";
        temp = temp->prev;
    }
    cout<<"NULL";
}
// deletion at beginning

void deleteAtBeginning(Node*& head){
    if(head == NULL){
        cout<<"List is already empty!!";
        return;
    }
    Node* temp = head; // head 1 2 3 4 5 .... del temp
    // head 1 2 3 4 5...// 1 2 3 4 5  6 .....
    // head = head->next
    head = head->next;// null<-head <-1 // head = null
    if(head != NULL){
        head->prev = NULL;
    }
    delete temp; // delete(temp);
}

// deletion at end
void deleteAtEnd(Node*& head){
    if(head == NULL){
        cout<<"List is already empty!!";
        return;
    }
    Node* temp =  head;
    // head 1 2 3 4 -> null // 4 (temp->prev)->next = NULL
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;
}

// DElete at random position
void deleteAtPosition(Node*& head, int position){
    if(head == NULL){
        cout<<"List is already empty!!";
        return;
    }
    if(position == 1){
        deleteAtBeginning(head);
        return;
    }
    
    Node* temp = head;
    for(int i=1;temp != NULL && i< position ;i++){
        temp = temp->next;
    }

    // 1 2 3 4 5 -> NULL /// 2<- 3 ->4 // 2<-4 2->3
    // 2  <-4
    if(temp->next != NULL){
        temp->next->prev = temp -> prev;// 2<-4
    }
    // 1 2  4 5 // 3
    if(temp->prev != NULL){
        // 2 -> 4
        temp->prev->next = temp->next;// 2-> 4
    }
    delete temp;
}

// main function
int main(){
    Node* head  = NULL;
    insertatBeginning(head,20);
    insertatBeginning(head,10);
    insertAtPosition(head,30,3);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
    cout<<"Original LinkedList: "<<endl;
    forwardTraverse(head);
    //deleteAtBeginning(head);
    //deleteAtEnd(head);
    deleteAtPosition(head,3);
    cout<<"Linked list after Deletion:"<<endl;
    forwardTraverse(head);

    
    return 0;
}