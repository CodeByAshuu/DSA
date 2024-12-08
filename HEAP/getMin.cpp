#include <iostream>
using namespace std;


// Function to heapify a subtree rooted at index i
void heapify(int heap[], int size, int i) {
    int largest = i; 
    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2; // Right child index

    // If left child is larger than root
    if (left < size && heap[left] > heap[largest]) {
        largest = left;
    }

    // If right child is larger than largest so far
    if (right < size && heap[right] > heap[largest]) {
        largest = right;
    }

    // If largest is not root, swap and recursively heapify the affected subtree
    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(heap, size, largest);
    }
}

// Function to insert an element into the heap
void insert(int heap[], int& size, int key, int capacity) {
    if (size == capacity) {
        cout << "Overflow: Could not insert key\n";
        return;
    }

    // Insert the new element at the end
    heap[size] = key;
    int i = size;
    size++;

    heapify(heap,size,i);
}


// Function to get the maximum element
int getMin(int heap[], int size) {
    return heap[size-2];
}

// Function to print the heap array
void printHeap(int heap[], int size) {
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

void buildMaxHeap(int heap[],int size){
    for(int i = size/2 - 1; i >= 0; i--){
        heapify(heap,size,i);
    }
}

int main() {
    int n, capacity = 20;
    cout << "num of element";
    cin >> n;

    int heap[capacity];
    int size = 0;
    for(int i=0;i < n; i++){
        int val;
        cin >> val;
        insert(heap,size,val,capacity);
    }
    cout << "Original Array: ";
    printHeap(heap,size);

    cout <<"Max Heap: ";
    buildMaxHeap(heap,size);
    printHeap(heap,size);

    cout << "Current minimum: " << getMin(heap,size) << endl;

    return 0;
}
