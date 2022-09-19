#include<bits/stdc++.h>
using namespace std;
// Node creation , insertion , print , deletion

// Create a list
class Node{
    public:
        int data;
        Node* next;

        Node(int  data){
            this->data = data;
            this->next = NULL;
        }
        ~Node(){
            cout<<"Delete constructor is called\n";
        }
};
// node insertion process at head side in reverse direction
void insertAthead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAttail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
// print node list
void print(Node* &head){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node*temp  = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void insertAtPos(Node* &head, int pos , int data){
    if(pos == 1){
        insertAthead(head,data);        
        return;
    }

    int cnt = 1;
    Node* temp = head;
    Node* newnode = new Node(data);
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// deletion operations

void deletenode(Node* &head, int pos){
    if(pos == 1){
        Node * temp = head;
        head = temp->next;
        delete temp;
        return;
    }

    Node* prev = head;
    Node* curr = prev->next;
    int cnt = 1;
    while(cnt<pos-1){
        prev = curr;
        curr = prev->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
int main(){
    Node* Node1 = new Node(1);
    Node* head = Node1;
    Node* tail = Node1;

    print(head);
    insertAthead(head,2);
    print(head);
    insertAthead(head,3);
    print(head);


    // print(head);
    // insertAttail(tail,2);
    // print(head);
    // insertAttail(tail,3);
    // print(head);
 
    // insert in the begin
    insertAtPos(head,1,4);
    print(head);

     // insert in the middle
    insertAtPos(head,3,7);
    print(head);

    // insert in the last
    insertAtPos(head,6,0);
    print(head); 


    //deletion in the bigin
    deletenode(head,1);
    print(head);

     //deletion in the middle
    deletenode(head,3);
    print(head);

     //deletion in the end
    deletenode(head,4);
    print(head);

    insertAthead(head,5);
    print(head);
}