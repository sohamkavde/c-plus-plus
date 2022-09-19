#include<iostream>
using namespace std;
// Add two linked list
class Node{
    public:
        int data;
        Node* next;
        
        Node(int data){
            this->data = data;
            this->next = NULL;
            
        }
};

void insertAtTail(Node* &tail,int data){
   
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void print(Node* head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

Node* reverse(Node* &temp){
    Node* prev = NULL;
    Node* curr = temp;
    Node* next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
    

}

Node* addlist(Node* head1,Node* head2){
    int carry = 0;
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* newnode = new Node(0);
    Node* newHead = newnode;
    while (temp1 != NULL && temp2 != NULL)
    {
        int val1 = temp1->data;
        int val2 = temp2->data;

        int ans = carry + val1 +val2;
        carry =ans/10;
        int  digit = ans%10;

        insertAtTail(newnode,digit);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    while (temp1 != NULL)
    {
         int val1 = temp1->data;
        int val2 = 0;

        int ans = carry + val1 +val2;
        carry =ans/10;
        int  digit = ans%10;

        insertAtTail(newnode,digit);
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
         int val1 = 0;
        int val2 = temp2->data;

        int ans = carry + val1 +val2;
        carry =ans/10;
        int  digit = ans%10;

        insertAtTail(newnode,digit);
        temp2 = temp2->next;
    }
    
    if(carry != 0){
        insertAtTail(newnode,carry);
    }
    newHead = newHead->next;
    return newHead;
}




//optimised code
Node* addlist1(Node* head1,Node* head2){
  
            int carry = 0;
            Node* temp1 = head1;
            Node* temp2 = head2;
            Node* newnode = new Node(0);
            Node* newHead = newnode;
            while (temp1 != NULL || temp2 != NULL || carry != 0)
            {
                int val1 = 0;
                if(temp1 != NULL)
                    val1 = temp1->data;
                int  val2 = 0;
                if(temp2  != NULL)
                    val2 = temp2->data;
        
                int ans = carry + val1 +val2;
                carry =ans/10;
                int  digit = ans%10;
        
                insertAtTail(newnode,digit);
                if(temp1 != NULL)
                     temp1 = temp1->next;
                if(temp2 != NULL)
                    temp2 = temp2->next;
     }
    newHead = newHead->next;
    return newHead;
}


Node*  addTwoNumber(Node* &head1,Node* &head2){
        Node* temp1 = head1;
        Node* temp2 = head2;     

       
        Node* rev1 = reverse(temp1);        
        Node* rev2 = reverse(temp2);

        Node* add = addlist(rev1,rev2);

        add = reverse(add);

        return add;       
        
}

int main(){
    Node* nod1 = new Node(4);
    Node* head = nod1;
    Node* tail = nod1;

    insertAtTail(tail,5);
    print(head);

    // insertAtTail(tail,9);
    // print(head);


    Node* nod2 = new Node(3);
    Node* head2 = nod2;
    Node* tail2 = nod2;

    insertAtTail(tail2,4);
    // print(head2);

    insertAtTail(tail2,5);
    print(head2);

    
    Node* ans = addTwoNumber(head,head2);
    print(ans);

}