//wap to delete an element from an array

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int index;
    cout << "Index to enter : ";
    cin >> index;
    for(int i=index;i<n-1;i++){
        arr[i] = arr[i+1];
    }

    n--;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}