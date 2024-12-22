#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = next;
    }
};

void displayReverse(Node* head){
    if (head == NULL) {
        return;
    }

    //
    displayReverse(head->next);             //goes from 1 to 2 to 3 to lastnode
    // after lastnode, it will again call lastnode and then it'll return.
    cout << head->data<< " -> ";               //then print value.

    //then lastnode is completed, now it'll call 3 then 2 then 1 & will print respectively
    
}

//practicing for printing in reverse
/*void displayReverseLL(Node* head){
    if (head == NULL) {
        return;
    }
    displayReverseLL(head->next);
    cout << head->data << " -> " ;
}*/






void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<< "NULL" << endl;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    cout << "Original Linked List: ";
    display(head);
    cout << "In reverse: ";
    displayReverse(head);
    cout << " NULL";
    return 0;
}