#include<bits/stdc++.h>
using namespace std;
// Doubly Linked list , insertion , position , deletion , print 

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

//  insertnode 
void insertNode(Node* &head, int data){
    Node* head1 = head;
    Node*  temp = new Node(data);
    temp->next = head1;
    temp->next->prev = temp->next;
    head = temp;
}

//  insertnode at tail
void inserttail(Node* &tail, int data){
    Node* head1 = tail;
    Node*  temp = new Node(data);
    tail->next = temp;
    temp->prev = head1->next;
    tail = temp;
}

// insert  at position
void insertAtPos(Node* &tail,Node* &head ,int pos , int data){
    if(pos == 1){
        insertNode(head,data);
        return;
    }

    int cnt = 1;
    Node* curr = new Node(data);
    Node* temp = head;
    while (cnt<pos-1)   
    {
        temp = temp->next;
        cnt++;
    }

   if(temp->next == NULL){
        inserttail(tail,data);
        return;
   }
    curr->next = temp->next;
    temp->next->prev = curr->next;
    temp->next = curr;
    curr->prev = temp;
    
}

// Remove node
void  deletenode(Node* &head, int pos){
    if(pos==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next; 
        temp->next = NULL;
        delete temp;
        return;
    }

    Node*temp = head;
    Node* curr =  temp->next;
    int cnt = 1;
    while (cnt<pos-1)
    {
        temp = curr;
        curr = temp->next;  
        cnt++; 
    }

    if(curr->next == NULL){
        temp->next = curr ->next;       
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
        return;
    }
    temp->next = curr ->next;
    curr->next->prev = temp->next;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
    
}





// print  nodes
void print(Node* &head){
    if(head == NULL){
        cout<<"This list is empty\n";
        return;
    }

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
int  main(){
    Node* node1 = new Node(1);
    Node* head =node1;
    Node* tail = node1;

    print(head);

    insertNode(head,2);
    print(head);
   
    insertNode(head,3);
    print(head);

    insertNode(head,4);
    print(head);

    // isnerting at bigining
    insertAtPos(tail,head,1,2);
    print(head);

    // isnerting at middil
    insertAtPos(tail,head,3,5);
    print(head);

     // isnerting at last
    insertAtPos(tail,head,7,15);
    print(head);

    // insert at tail
    inserttail(tail,44);
    print(head);
     // insert at tail
    inserttail(tail,445);
    print(head);


    //  deletion at begining
    deletenode(head,1);
    print(head);

    // deletion at middle
    deletenode(head,2);
    print(head);

    // deletion at end
    deletenode(head,7);
    print(head);

    

}