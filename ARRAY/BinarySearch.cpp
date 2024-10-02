//WAP to binary search

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }

    int value;
    cout << "Value to search : ";
    cin >> value;

    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==value){
            cout << "Element found at index "<<mid;
            break;
        }else if(arr[mid]>value){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    
    return 0;
}