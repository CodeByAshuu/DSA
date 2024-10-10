//Find sum of pair of elements whose sum is equal to given key

#include <iostream>
using namespace std;

int main(){
    int n,key;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> key;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                cout << arr[i] << " " << arr[j] << " = "<< key << endl;
            }
        }
    }

    return 0;
}