// count the numbers in array which are greater then given number.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] > key){
            count++;
        }
    }

    cout << count;
    return 0;
}