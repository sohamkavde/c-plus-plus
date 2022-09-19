#include<iostream>
using namespace std;
// Merge Sort
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data =data;
            this->next = NULL;
        }
};

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}



// -------------------Merge Sort 
Node* GetMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
       fast = fast->next->next;
    }
    return slow;

}

Node* Msort(Node* left , Node* right){
    if(left == NULL){
        return right;
    }

    if(right == NULL){
        return left;
    }
    Node* ans = new Node(0);
    Node* ansHead = ans;
    while (left != NULL && right != NULL)
    {
       if(left->data < right->data){
            ans->next = left;
            ans = left;
            left = left->next;
       }else{
            ans->next = right;
            ans = right;
            right = right->next;
       }
    }

    while (left != NULL)
    {
        ans->next = left;
        ans = left;
        left = left->next;
    }
    
    while (right != NULL)
    {
        ans->next = right;
        ans = right;
        right = right->next;
    }
    ansHead = ansHead->next;

    return ansHead;    

}

Node* MergeSort(Node* &head){
    Node* temp = head;
    if(head == NULL || head->next ==NULL)
            return head;


    // Get mid
    Node* mid = GetMid(temp);
    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left = MergeSort(left);
    right = MergeSort(right);

    Node* result = Msort(left,right);

    return result;

}
int main(){
    Node* node = new Node(1);
    Node* head = node;
    Node* tail = node;

    insertAtTail(tail,2);
    print(head);

    insertAtTail(tail,4);
    print(head);

    insertAtTail(tail,3);
    print(head);


    insertAtTail(tail,7);
    print(head);

    insertAtTail(tail,5);
    print(head);

    insertAtTail(tail,1);
    print(head);
    cout<<"After Merge sort \n";

    Node* ans = MergeSort(head);
    print(ans);
}
