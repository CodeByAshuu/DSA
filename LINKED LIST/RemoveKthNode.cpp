//Given the head of the linked list, remove the kth node of the linked list from the end. And return its head.

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    newNode->next = NULL;
    temp->next = newNode;
}


void removeKthNode(Node* &head,int k){
    Node* ptr1 = head;
    Node* ptr2 = head;
    int count = k;

    //move pt2 k-steps ahead
    while(count--){
        ptr2 = ptr2->next;
    }

    //move both pointer with k-number of gaps
    while(ptr2->next!=NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    //ptr1 pointing to (k-1)th node to be deleted
    Node* prev = ptr1->next;               //pointer at pos to delete
    ptr1->next = ptr1->next->next;      //pos-1 will point to pos+1
    free(prev);
    
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<"NULL" <<endl;
}

int main(){
    Node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    display(head);


    int k;
    cout<< "enter the position end to remove : ";
    cin >> k;
    removeKthNode(head,k);
    display(head);

    return 0;
}