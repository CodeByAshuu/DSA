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
void DeleteAlternate(Node* &head){
    Node* curr = head;
    while(curr != NULL && curr->next!=NULL){      // for even and odd respectively
        Node* temp = curr->next;                    //node to be deleted
        curr->next = curr->next->next;          //next to next node(skipped a node)
        free(temp);                             //delete the node
        curr = curr->next;                      //aage badhayenge curr node ko
    }
}
//1->2->3->4->5->NULL               1->3->5->NULL
//1->2->3->4->5->6->NULL            1->3->5->NULL
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
    Node* sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    // fifth->next = NULL;
    display(head);
    DeleteAlternate(head);
    display(head);
    return 0;
}