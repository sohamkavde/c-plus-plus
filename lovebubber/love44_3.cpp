#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = this;
        }
};

bool isCircular(Node* &head){
    if(head ==  NULL){
        return true;
    }

    Node* temp = head->next;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    
    if(temp == NULL){
        return false;
    }
    else{
        return true;
    }

}

// print data
void print(Node* &head){
    Node* temp = head;

    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
    cout<<"\n";   
    
};

void inseretNode(Node* &head, int data){
    Node* temp = new Node(2);
    Node* head1 = head;

    temp->next = head1;
    head1->next = temp;
    head = temp;
}

void insertAtPos(Node* &head, int  val ,int data){
   Node* temp = head;
   while (temp->data != val)
   {
        temp = temp->next;
   }
   Node* newNode = new Node(data);
   newNode->next = temp->next;
   temp->next = newNode;   

}

// delete node
void deleteNode(Node* &head, int val){
    Node* temp = head;
    Node* curr = temp->next;
    
    while (curr->data != val)
    {
       temp = curr;
       curr = temp->next;       
    }

    temp->next = curr->next;
     //1 Node Linked List
        if(curr == temp) {
            head = NULL;
        }

        //>=2 Node linked list
        else if(head == curr ) {
            head = temp;
        }

        curr -> next = NULL;
        delete curr;
    
}
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    // print data
    print(head);

    //insert node for first place
    inseretNode(head,2);
    print(head);

    // insert on position by value 
    insertAtPos(head,1,3); // 1 is already exist value; // 3 is inserint value
    print(head);

    insertAtPos(head,3,4); 
    print(head);
    // delete
    deleteNode(head,1);
    print(head);
    
    deleteNode(head,3);
    print(head);

    
}