//WAP such that, if even index, increment the element by 10, if odd then multiply by 2

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i % 2 == 0){
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i] * 2;
        }
    }

    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}