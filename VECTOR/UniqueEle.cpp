//WAP to print the unique element where other elements are repeated
#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=0;i<n;i++){
//         bool flag = false;
//         for(int j=i+1;j<n;j++){
//             if(arr[i] == arr[j]){
//                 flag = true;
//             }
//         }
//         if(flag == false){
//             cout << arr[i];
//             break;
//         }
//     }
    
//     return 0;
// }

int main(){
    vector<int> vec;
    int n;
    cin>> n;
    int val;
    for(int i=0; i<n; i++){
        cin >> val;
        vec.push_back(val);
    }
    for(int value : vec){
        cout << value << " " ;
    }
    cout << endl;
    int unique=0;
    for(int val : vec){
        unique ^= val;
    }

    cout << "unique : " << unique;
    return 0;
}