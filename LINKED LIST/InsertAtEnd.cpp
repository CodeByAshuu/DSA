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

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node* &head,int val){
    Node* temp = head;                  //created temp pointer at  head
    while(temp->next!=NULL){            //temp->next will go to last then become null
        temp = temp->next;              //temp will go to the last node
    }
    Node* newNode = new Node(val);
    newNode->next = NULL;                   //newnode's next will point to null
    temp->next = newNode;                   //temp->next which is last node, will point to newNode
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = new Node(1);
    int n;
    cout<< "Enter num of element: ";
    cin >> n; //num of values to inser
    for(int i=0;i<n;i++){
        cout <<"enter value: ";
        int val;
        cin >> val;                  //val to insert
        insertAtEnd(head,val);
    }
    display(head);
    insertAtEnd(head,5000);
    display(head);
    return 0;
}