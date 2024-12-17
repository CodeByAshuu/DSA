//REVERSING A LINKED LIST USING RECURSION

// 1 2 3 4 5 NULL
// 5 4 3 2 1 NULL

// ek toh solve kro, baki (n-1) recursion se hoga
// 1 -> 2 -> 3 -> 4 -> 5 -> NULL
// 1(head) -> [2(head->next) <- 3 <- 4 <- 5(newHead)]
// 1(head) -> <- [2(head->next) <- 3 <- 4 <- 5(newHead)]
// NULL <- 1(head) <- [2(head->next) <- 3 <- 4 <- 5(newHead)]
// 5 4 3 2 1 NULL

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


Node* ReverseLLRecursion(Node* &head){

    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    //recursive case
    Node* newHead = ReverseLLRecursion(head->next);
    head->next->next = head;
    head->next = NULL;      //head is pointing to lastnode in reversed LL
    return newHead;
}

//practice for revising
/*Node* reverseLLRecursion(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newHead = reverseLLRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
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
    temp->next = new Node(5);
    temp = temp->next;
    temp->next = new Node(15);
    temp = temp->next;
    temp->next = new Node(20);
    temp = temp->next;
    temp->next = new Node(25);
    temp = temp->next;
    
    display(head);
    head = ReverseLLRecursion(head);    //new head is set
    display(head);                       //last element is now newHead
    return 0;
}