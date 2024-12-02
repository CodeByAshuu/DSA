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


//Traversing
void display(Node* head){
    Node* temp = head;          //temp pointer banaya which is at head rn
    while(temp != NULL){                // jb tk temp null nhi hojata
        cout << temp->data << " -> ";       //we will print the data at addr stored in temp
        temp = temp->next;                  //next node ko temp bana diya
    }
    cout << "NULL";
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
    return 0;
}