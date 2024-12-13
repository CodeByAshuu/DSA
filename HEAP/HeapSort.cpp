#include <iostream>
using namespace std;


void heapify(int heap[], int size, int i){
    int largest = i;
    int left = 2*i +1;
    int right = 2*i + 2;

    if(left < size && heap[left] > heap[largest]){
        largest = left;
    }
    if(right < size && heap[right] > heap[largest]){
        largest = right;
    }
    if(largest != i){
        swap(heap[i], heap[largest]);
        heapify(heap,size,largest);
    }
}


void buildMaxHeap(int heap[],int &size){
    for(int i = size/2 - 1; i>=0 ; i--){
        heapify(heap,size,i);
    }
}


void insert(int heap[],int& size, int key, int cap){
    if(size == cap){
        cout<<"Heap is full"<<endl;
    }

    heap[size] = key;
    int i = size;
    size++;
    heapify(heap,size,i);
}


void heapSort(int heap[],int size){
    for(int i = size-1; i >=0; i--){
        swap(heap[0], heap[i]);
        heapify(heap,i,0);
    }
}


void print(int heap[],int size){
    for(int i=0; i < size; i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, capacity = 20;
    cout << "num of element : ";
    cin >> n;

    int heap[capacity];
    int size = 0;
    for(int i=0;i < n; i++){
        int val;
        cin >> val;
        insert(heap,size,val,capacity);
    }
    cout << "Original Array: ";
    print(heap,size);

    cout <<"Max Heap: ";
    buildMaxHeap(heap,size);
    print(heap,size);

    heapSort(heap,size);
    cout << "Heap after sorting ";
    print(heap,size);
    return 0;
}