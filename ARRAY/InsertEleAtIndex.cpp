//WAP to insert element at a particular index

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int value,index;
    cout << "Value to enter : ";
    cin >> value;
    cout << "Index to enter : ";
    cin >> index;
    n++;
    for(int i=n;i>index;i--){
        arr[i-1] = arr[i-2];
    }
    arr[index] = value;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}