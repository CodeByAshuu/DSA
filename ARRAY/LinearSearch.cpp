//WAP to Linear search;

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
    for(int i=0;i<n;i++){
        if(arr[i]== value){
            cout << i << " ";
        }
    }
    return 0;
}