//Given 2 heads H1 and H2 of linked list, check if the nodes of the linked list are intersecting or not.
//if no intersection then return null

/*

H1: 1 -> 2 -> 3 -> 4 -> 5 -> 6
H2: 4 -> 5 -> 6(from H1)

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


void checkIntersection(Node* head1, Node* head2){
    if(head1 == NULL || head2 == NULL){
        cout<<"No intersection found"<<endl;
        return;
    }

    Node* temp1 = head1;
    Node* temp2 = head2;
    bool flag = false;
    while(temp1!=NULL || temp2!=NULL){
        if(temp1 == temp2){
            cout<<"Intersection found"<<endl;
            cout << temp1->data<< " is the intesection point";
            flag = true;
            return;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(flag == false){
        cout<<"No intersection found : NULL "<<endl;
    }
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> " ;
        temp = temp->next;
    }
    cout << "NULL" << endl;
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
    head2->next = Second;
    Second->next = Third;
    Third->next = fourth;           //H2's Third(3) is pointing to H1's fourth(4) 
    cout << "2nd Linked List: ";
    display(head2);

    checkIntersection(head1, head2);
    cout <<endl;
    return 0;
}