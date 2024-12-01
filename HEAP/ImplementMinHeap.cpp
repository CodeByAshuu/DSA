//Implement Min Heap using vector

#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& heap,int size, int i){
    int smallest =i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < size && heap[left] < heap[smallest]){
        smallest = left;
    }
    if(right < size && heap[right] < heap[smallest]){
        smallest = right;
    }
    if(smallest != i){
        swap(heap[i],heap[smallest]);
        heapify(heap,size,i);
    }
}


// last none leaf node: (size/2)-1
void buidlMinHeap(vector<int>& heap,int size){
    //start from last non leaf node
    for(int i = size/2-1;i>=0;i--){
        heapify(heap,size,i);
    }
}


void print(vector<int> heap,int size){
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> heap = {20, 70, 90, 15, 10, 55, 40};
    int size = heap.size();
    int i = 0;

    heapify(heap,size,i);
    cout << "Min Heap: ";
    print(heap,size);
    return 0;
}
