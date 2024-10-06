//WAP to check array if it is palindrome or not.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[n-1-i]){
            count++;
        }
    }

    if(count == n){
            cout << "Array is palindrome";
    }else{
        cout << "Array is not palindrome";
    }
    return 0;
}