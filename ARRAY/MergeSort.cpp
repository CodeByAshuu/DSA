//WAP to merge sort array

#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int left=0,right=n-1;
    int mid = left+(right - left)/2;
    int n1=mid-left+1;
    int n2= right-mid;

    int arr1[n1];
    int arr2[n2];
    
    for(int i=0;i<n1;i++){
        arr1[i]=arr[left+i];
    }

    for(int i=0;i<n2;i++){
        arr2[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
        }else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=arr1[i];
        k++;
        i++;
    }

    while(j<n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }
    
    return 0;
}