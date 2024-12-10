#include <iostream>
#include <climits>
using namespace std;

//min heap
void heapify(int heap[], int size, int i){
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < size && heap[left] <  heap[smallest]) {
        smallest = left;
    }
    if(right < size && heap[right] <heap[smallest]){
        smallest = right;
    }
    if(smallest != i){
        swap(heap[i], heap[smallest]);
        heapify(heap,size,smallest);
    }
}

void buildMinHeap(int heap[], int size){
    for(int i = size/2 - 1; i >= 0; i--){
        heapify(heap, size, i);
    }
}

void printHeap(int heap[], int size){
    heapify(heap,size,0);
    for(int i = 0; i < size; i++){
        cout << heap[i] << " ";
    }
    cout << endl;
}
void insert(int heap[],int& size, int val,int cap){
    if(size == cap){
        cout<<"Heap is full"<<endl;
    }

    heap[size] = val;
    int i = size;
    size++;
    heapify(heap,size,i);
}

int getSecondMin(int heap[],int size){
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < size; i++){
        if(heap[i] < smallest){
            secondSmallest = smallest;
            smallest = heap[i];
        }
        else if(heap[i] < secondSmallest && heap[i] != smallest){
            secondSmallest = heap[i];
        }
    }

    return secondSmallest;

}

int main(){
    int n, capacity = 20;
    int size = 0;
    int heap[capacity];
    cout << "Number of elements: " ;
    cin >> n;
    for(int i=0; i <n ; i++){
        int val;
        cin >> val;
        insert(heap,size,val,capacity);
    }
    cout << "Original heap array : ";
    printHeap(heap,size);
    
    buildMinHeap(heap,size);
    cout << "Min heap array : ";
    printHeap(heap,size);

    cout << "2nd smallest element: " << getSecondMin(heap,size);
    return 0;
}