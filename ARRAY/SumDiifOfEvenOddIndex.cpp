//WAP to find diffrence between sum of even indexed element and odd indexed element

#include <iostream>
using namespace std;

int main(){
    int n,evenSum=0,oddSum=0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i%2==0){
            evenSum+=arr[i];
        }else{
            oddSum +=arr[i];
        }
    }

    cout << "Difference : " << evenSum - oddSum <<endl;
    return 0;
}