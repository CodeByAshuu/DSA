//WAP to print second largest element

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    int max=arr[0];
    int SecMax=arr[0];
    // 1 2 3 4 5
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i]!=SecMax){
            SecMax =arr[i];
        }
    }
    cout << "Second max element : " << SecMax ;
    return 0;
}