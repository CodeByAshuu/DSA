//write a program to insert a element at end of the array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int n;
    cin>> n;
    int val;;
    for(int i=0; i<n; i++){
        cin >> val;
        vec.push_back(val);
    }
    for(int value : vec){
        cout << value << " " ;
    }
    cout << endl;
    int last = vec.back();
    cout << "Enter value to enter : ";
    cin >> val;
    int size = vec.size();
    for(int i=size; i>0; i--){
        vec[i] = vec[i-1];
    }
    vec[0] = val;
    vec.push_back(last);
    for(int val : vec){
         cout << val << " ";
    }
    return 0;
}

// 1 2 3 4 5 6
// 1 1 2 3 4 5 6
// 7 1 2 3 4 5 6