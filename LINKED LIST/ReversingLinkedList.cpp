// 1 2 3 4 5 NULL
// 5 4 3 2 1 NULL

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


void ReverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    //    while(curr != NULL){
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;  
    }
    head = prev;
}

//practice for revising
/*void ReversLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}*/


void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<"NULL" << endl;
}

int main(){
    Node* head = new Node(1);
    Node* temp = head;
    temp->next = new Node(5);
    temp = temp->next;
    temp->next = new Node(15);
    temp = temp->next;
    temp->next = new Node(20);
    temp = temp->next;
    temp->next = new Node(25);
    temp = temp->next;
    
    display(head);
    ReverseLL(head);
    display(head);
    return 0;
}