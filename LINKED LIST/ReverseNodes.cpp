//Given a head, reverse the nodes of the linked list K at a times, and return the modified list

/*
1 2 3 4 5 6 NULL
k = 3                   //reverse 1st three elements then other 3 and so on..
[1 2 3] [4 5 6]
3 2 1 6 5 4


1 2 3 4 5 6 NULL
k = 2                   //reverse 1st two elements then other 2 and so on..
[1 2] [3 4] [5 6]
2 1 4 3 6 5


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


Node* reverseKNode(Node* &head,int  k){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int counter = 0;

    //reversing the 1st k nodes
    while(curr!=NULL && counter<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        counter++;
    }

    //NULL <- 1(head) <- 2(prev)    3(curr) -> 4(newHead) -> 5 -> 6
    //curr pointer will give us k+1nth node
    if(curr!=NULL){
        head->next = reverseKNode(curr,k);  //recursive call. connected the head to newHead
    }
    //2->1->4->3->6->5
    return prev;    //prev pointer will give the new head
}

//practicing
/*Node* ReverKNodes(Node* &head,int k){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int counter = 0;

    while(curr!=NULL && counter<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        counter++;
    }

    if(curr!=NULL){
        head->next = ReverKNodes(curr,k);
    }
    return prev;
}*/



void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<"NULL" << endl;
}

int main(){
    Node* head = new Node(1);
    Node* temp = head;
    temp->next = new Node(2);
    temp = temp->next;
    temp->next = new Node(3);
    temp = temp->next;
    temp->next = new Node(4);
    temp = temp->next;
    temp->next = new Node(5);
    temp = temp->next;
    temp->next = new Node(6);
    temp = temp->next;
    
    display(head);

    int k;
    cout << "enter num of nodes to reverse at a time(k) : ";
    cin >> k;
    head = reverseKNode(head,k);
    display(head);
    return 0;
}