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

int deleteNode(int heap[], int& size,int key){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        size--;
    }

    int root = heap[key-1];         //stored the deleted ele in root
    heap[key-1] = heap[size-1];        //last ele ko key deleted node ki jgh dal diya
    size--;                             //last node hi hata diya
    heapify(heap,size,0);

    return root;

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

    int key;
    cout << "Enter the key to delete: ";
    cin >> key;
    cout << "Deleted element: " << deleteNode(heap,size,key) << endl;

    cout << "Heap after deletion: ";
    print(heap,size);
    return 0;
}