#include <iostream>
#include <climits>
using namespace std;

class Queue{
private:
    int front;
    int rear;
    int capacity;
    int* queue;

public:
    Queue(int size){
        capacity = size;
        front = -1;
        rear = -1;
        queue = new int[capacity];
    }

    ~Queue(){
        delete[] queue;
    }

    bool isFull() {
        return (rear == capacity - 1);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue(int data){
        if(isFull()){
            cout << "Queue is full"<<endl;
        }else{
            if(front == -1){
                front = 0;
            }
            rear++;
            queue[rear] = data;
            cout << data << " added to the queue"<<endl;
        }
    }

    int dequeue(){
        if(isEmpty()){
            cout << "Queue is empty"<<endl;
            return -1;
        }else{
            int dequeuedVal = queue[front];
            front++;
            if(front > rear){
                front = rear = -1;
            }
            return dequeuedVal;
        }
    }

    int peek(){
        if(isEmpty()){
            cout << "Queue is empty"<<endl;
            return -1;
        }
        cout << "Front element: ";
        return queue[front];
    }

    void display(){
        if(isEmpty()){
            cout << "Queue is empty"<<endl;
        }else{
            cout << "Queue Element: ";
            for(int i = front; i <=rear; i++){
                cout << queue[i] << " ";
            }
            cout <<endl;
        }
    }

    
};

int main(){
    Queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70); //overflow

    q.display();
    q.dequeue();
    q.peek();
    cout << "After deletion ";
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();        //underflow

    return 0;

}