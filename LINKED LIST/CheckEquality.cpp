//Given 2 Linked List, tell is they are equal or not

/*
condition: 
length should be same
value should be same
arrangement of values should be same
*/

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


void EqualOrNot(Node* head1,Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    bool flag = true;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data != temp2->data){
            cout<<"Linked Lists are not equal"<<endl;
            flag = false;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(flag == true){
        cout<<"Linked Lists are equal"<<endl;
    }
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" <<endl;
}

int main(){
    Node* head1 = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    head1->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    cout << "1st Linked List: ";
    display(head1);


    Node* head2 = new Node(1);
    Node* Second = new Node(2);
    Node* Third = new Node(3);
    Node* Fourth = new Node(4);
    Node* Fifth = new Node(5);
    head2->next = Second;
    Second->next = Third;
    Third->next = Fourth;
    Fourth->next = Fifth;
    Fifth->next = NULL;
    cout << "2nd Linked List: ";
    display(head2);
    EqualOrNot(head1, head2);
    cout <<endl;

    Node* head3 = new Node(1);
    Node* n2 = new Node(-4);
    Node* n3 = new Node(3);
    Node* n4 = new Node(48);
    Node* n5 = new Node(90);
    head3->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
    cout << "3rd Linked List: ";
    display(head3);


    Node* head4 = new Node(1);
    Node* h2 = new Node(20);
    Node* h3 = new Node(30);
    Node* h4 = new Node(4);
    Node* h5 = new Node(50);
    head4->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = h5;
    h5->next = NULL;
    cout << "4rth Linked List: ";
    display(head4);
    EqualOrNot(head3, head4);
    cout <<endl;
}