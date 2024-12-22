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

class Queue{
    private:
    Node* front;
    Node* rear;
    
    public:
    Queue(){
        front = NULL;
        rear = NULL;
    }

    bool isEmpty(){
        return front == NULL;
    }


    void enqueue(int val){
        Node* temp = new Node(val);
        if(front == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue(){
        if(front == NULL){
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
    }

    int getFront(){
        if(front==NULL){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    int getRear(){
        if(rear==NULL){
            cout << "Queue is empty" << endl;
        }
        return rear->data;
    }

    void print(){
        Node* temp = front;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);
    q.print();
    cout << "Front element: " << q.getFront() << endl;
    q.dequeue();
    q.print();
    cout << "Rear Element: ";
    q.getRear();

    return 0;
}