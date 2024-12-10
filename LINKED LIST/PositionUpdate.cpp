#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//Time Complexity : O(k)
void UpdateAtPosition(Node* &head,int pos, int val){
    Node* temp = head;
    int count = 1;
    while(count!=pos){
        temp= temp->next;
        count++;
    }
    temp->data = val;
}


void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp=temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    display(head);
    int pos;
    cout << "enter pos : ";
    cin >> pos;
    UpdateAtPosition(head,pos,100);
    display(head);
    return 0;
}