#include<bits/stdc++.h>
using namespace std;
// Q1 check list is circular or not , Detection of intersection of circular list and return Node;
// Q2 starting Node of circular List
///Q3  First Find Last Node of circular list and move to NUll i.e. remove Circular list from given list
class Node{
    public: 
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertAttail(Node* &tail,int  data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail  = temp;
}

void print(Node* head){
    Node* temp = head;
    while (temp !=  NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";    

}

// This will check List is has circular  list or not return true false
bool DetectLoop(Node* &head){
    if(head == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast  != NULL){
            fast = fast->next;
        }

        slow =  slow->next;

        if(slow == fast){
            return 1;
        }
    }
    
    return 0;

}

// check list is circular or not , Detection of intersection of circular list and return Node;
Node* DetectLoopNode(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow =  slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return slow;
        }
    }   
    return NULL;
}
// starting Node of circular List
Node* startingNode(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = DetectLoopNode(head);

    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;        
    }    
    return slow;
}
// First Find Last Node of circular list and move to NUll i.e. remove Circular list from given list
Node*  removeNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* start = startingNode(head);
    if(start == NULL){
        return NULL;
    }
    Node* temp = start->next;

    while (temp->next != start)
    {
            temp = temp->next;
    }

    temp->next = NULL;
    return head;

}
int main(){
    Node* node1  = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAttail(tail,2);
    print(head);

    insertAttail(tail,3);
    print(head);

    insertAttail(tail,4);
    print(head);

    insertAttail(tail,5);
    print(head);

    insertAttail(tail,6);
    print(head);

    insertAttail(tail,7);
    print(head);

    tail->next = head->next->next->next;
    bool check = DetectLoop(head);


   if(check){
    cout<<"Circular Linked List !"<<endl;
   }else{
    cout<<"Not a Circular Linked List \n";
   }

   Node* interSection = DetectLoopNode(head);
   cout<<"InterSection Node :"<<interSection->data<<endl;

   Node* startingNod = startingNode(head);
   cout<<"starting Node :"<<startingNod->data<<endl;
   
   removeNode(head);
   print(head);
   return 0;
}


