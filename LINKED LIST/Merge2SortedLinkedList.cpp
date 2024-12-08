//given two head of sorted linked list, merge the two linked list. and the new linked list should also be sorted.

#include <iostream>
#include <vector>
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

Node* mergeKLL(vector<Node*> &lists){
    if(lists.size() == 0 ){
        return NULL;
    }
    while(lists.size()>1){
        Node* mergeHead = mergeSortedLL(lists[0],lists[1]);
        lists.push_back(mergeHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }

    return lists[0];
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
    insertAtEnd(head1,2);
    insertAtEnd(head1,3);
    insertAtEnd(head1,4);
    insertAtEnd(head1,5);
    insertAtEnd(head1,6);
    insertAtEnd(head1,7);
    display(head1);

    Node* head2 = NULL;
    insertAtEnd(head2,10);
    insertAtEnd(head2,20);
    insertAtEnd(head2,30);
    insertAtEnd(head2,40);
    insertAtEnd(head2,50);
    display(head2);

    Node* head3 = NULL;
    insertAtEnd(head3,15);
    insertAtEnd(head3,25);
    insertAtEnd(head3,35);
    insertAtEnd(head3,45);
    insertAtEnd(head3,55);
    display(head3);


    Node* head4 = NULL;
    insertAtEnd(head4,-1);
    insertAtEnd(head4,-2);
    insertAtEnd(head4,-3);
    insertAtEnd(head4,-4);
    insertAtEnd(head4,-5);
    display(head4);

    vector<Node*> lists = {head1, head2, head3, head4};
    Node* dummy = mergeKLL(lists);
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