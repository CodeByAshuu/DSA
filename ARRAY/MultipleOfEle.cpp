//WAP to print multiplication of elements

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int arr[n];
    int mul =1;
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }

    for(int i=0;i<n;i++){
        mul *=arr[i];
    }
    cout << mul;
    return 0;
}