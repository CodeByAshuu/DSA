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
    arr[n-1]=value;
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }

    return 0;
}