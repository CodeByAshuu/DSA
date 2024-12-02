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

void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val);      //newnode bana ke usmei value daldi
    newNode->next = head;                  //new node ke next ko head ka addr de diya
    head =newNode;                      // newNode ko head bana diya
}

void insertAtEnd(Node* &head,int val){
    
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    newNode->next = NULL;
    temp->next = newNode;
}


//Time Complexity : O(pos)
void insertAtPosition(Node* head, int pos, int val){

    if(pos==0){
        insertAtHead(head,val);
    }
    Node* newNode = new Node(val);
    Node* temp = head;          //temp at head
    int current= 1;             
    while(current!=pos-1){
        temp = temp->next;         //temp will move pos-1 times
        current++;
    }
    
    //temp is pointing at pos-1
    newNode->next=temp->next;
    temp->next= newNode;
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
    Node* head = NULL;
    int n;
    cin >> n; //num of values to inser
    int val;
    for(int i=0;i<n;i++){
        cin >>val;                  //val to insert
        insertAtHead(head,val);
    }
    display(head);

    int pos;
    cin>>pos;

    insertAtPosition(head,pos,1000);
    display(head);
    return 0;
}