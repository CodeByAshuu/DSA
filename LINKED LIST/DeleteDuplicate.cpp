//sorted linked list is provided, delete the duplicate elements

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
void DeleteDuplicateNode(Node* &head){
    Node* curr = head;
    while(curr != NULL  && curr->next!=NULL){      // for even and odd respectively
        while(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }curr = curr->next;
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
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(3);
    Node* sixth = new Node(3);
    Node* seventh = new Node(4);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = NULL;
    cout << "Original Linked List: " << endl;
    display(head);

    cout << "Deleted Linked List: " << endl;
    DeleteDuplicateNode(head);
    display(head);
    return 0;
}