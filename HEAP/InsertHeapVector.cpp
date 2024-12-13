//insert in vector

#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& heap,int &size, int i){
    int largest =i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < size && heap[left] > heap[largest]){
        largest = left;
    }
    if(right < size && heap[right] > heap[largest]){
        largest = right;
    }
    if(largest != i){
        swap(heap[i],heap[largest]);
        heapify(heap,size,i);
    }
}


void print(vector<int> heap,int size){
    for (int i = 0; i <size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

void buildMaxHeap(vector<int>& heap,int size){
    for(int i = size/2 -1; i>=0;i--){
        heapify(heap,size,i);
    }
}

int main(){
    vector<int> heap = {1, 2, 3, 4, 5};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        heap.push_back(val);
    }
    int size = heap.size();

    cout << "Original Heap: ";
    print(heap,size);
    
    buildMaxHeap(heap,size);
    cout << "Max Heap: ";
    print(heap,size);
    return 0;
}