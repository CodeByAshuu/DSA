//write a program to insert a element at end of the array

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int value;
    cout << "Value to enter : ";
    cin >> value;
    n++;
    for(int i=n;i>1;i--){
        arr[i-1] = arr[i-2];
    }
    arr[0] = value;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}