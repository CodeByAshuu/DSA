//given an array of k sorted Linked list, merge the k linked lists. and the new linked list should also be sorted.

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

void insertAtEnd(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
}

Node* mergeSortedLL(Node* &head1, Node* &head2){
    Node* dummy = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = dummy;
    while(ptr1 && ptr2){
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;              //ptr3 will point to ptr1's value
            ptr1 = ptr1->next;              //ptr1 will point to next node
        }else{
            ptr3->next = ptr2;              //pt3 will point to ptr2's value
            ptr2 = ptr2->next;              //ptr2 will point to next node
        }
        ptr3= ptr3->next;                   //ptr3 will point to the next node
    }

    //if linked lists are of unequal size
    if(ptr1){                       
        ptr3->next = ptr1;                      //if ptr1 isnt NULL then ptr3 wil point to ptr1
    }else {
        ptr3->next = ptr2;                      //if ptr1 isnt NULL then ptr3 wil point to ptr2
    }

    return dummy->next;                         //a Node data-type is returned (dummyLL's head's next)
}


void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<"NULL" << endl;
}

int main(){
    Node* head1 = NULL;
    insertAtEnd(head1,1);
    insertAtEnd(head1,22);
    insertAtEnd(head1,35);
    insertAtEnd(head1,45);
    insertAtEnd(head1,57);
    insertAtEnd(head1,63);
    insertAtEnd(head1,79);
    display(head1);

    Node* head2 = NULL;
    insertAtEnd(head2,11);
    insertAtEnd(head2,55);
    insertAtEnd(head2,66);
    insertAtEnd(head2,77);
    insertAtEnd(head2,88);
    display(head2);

    Node* dummy = mergeSortedLL(head1,head2);
    display(dummy);

    
    return 0;
}


// if(head1->data < head2->data){
//     curr->next = head1;                     //curr = val at head1
//     head1 = head1->next;                    //new head moved to head1->next
// }else{
//     curr->next = head2;
//     head2 = head2->next;
// }