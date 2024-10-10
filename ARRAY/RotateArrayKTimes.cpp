//WAP to rotate an array k times, where k>0;

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout <<"Before Rotating : " ;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    int k;
    cin >> k;
    k=k%n;

    for(int i =0; i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    // 7 6 5 4 3 2 1

    for(int i=0,j=k-1;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    //5,6,7,4,3,2,1

    for(int i=k,j=n-1;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    //5 6 7 1 2 3 4
    
    cout <<"\nAfter Rotating : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

//reverse whole array
//k=k%n
//reverse upto k-1 part of array then
// reverse the other half