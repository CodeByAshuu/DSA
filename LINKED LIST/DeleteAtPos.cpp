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

//Time Complexity : O(1)
void DeleteAtPos(Node* &head,int pos){
    Node* temp = head;
    int curr = 1;
    while(curr!=pos-1){      //2nd last node tk jayega
        temp = temp->next;
        curr++;
    }
    //temp is pointing to pos-1
    Node* prev = temp->next;               //pointer at pos to delete
    temp->next = temp->next->next;      //pos-1 will point to pos+1
    free(prev);           //delete 
}
//1->2->3->4->5
// 1-> 2 ->  ->4->5

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
    cin >> pos;
    DeleteAtPos(head,pos);
    display(head);
    return 0;
}