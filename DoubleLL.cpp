#include <iostream>
using namespace std;
// data , forward pointer (next)
// data , reverse pointer(*prev, *back), forward pointer(*next, *forw)
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
    // null<-25 -> head newnode->next =  head,head->prev = newnode
    // Null<-25 -> head newnode<-head->Null
    newnode->next = head;//newnode -> <-head -> 0 null<-20-> 25->head
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
    // 6 -> newnode , temp <- newnode
    // 1 2 3 4 5 6-> <- newnode -> null // temp-> next = newnode , temp<-newnode 
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
    //2-> <-newnode-> <-4//4
    // 2->  <- newnode -> 4
    // 1 2 3-> <-4-> 5 6 7 newnode -> next = temp->next, newnode->prev = temp
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
// main function
int main(){
    Node* head  = NULL;
    insertatBeginning(head,20);
    insertatBeginning(head,10);
    insertAtPosition(head,30,3);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
     forwardTraverse(head);
    //print(head);
    <- 5 ->
    return 0;
}






// D1 -> R A D O // 4
// D2 -> T I T A N// 5
//i = 9
// merge -> if(i%2==0){
// insert(d2->data)
// i++
//}
// else{
//     insert(d1->data)
// }