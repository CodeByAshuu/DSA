//WAP to print triplet element whose sum is equal to the given key



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
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j] + arr[k]==key){
                cout << arr[i] << " " << arr[j] <<  " " << arr[k]<<" = "<< key << endl;
                }
            }
        }
    }

    return 0;
}