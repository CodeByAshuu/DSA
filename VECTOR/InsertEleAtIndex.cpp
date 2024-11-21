//write a program to insert a element at given index of the vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int n,index;
    cout << "Enter number of values: ";
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
    cout << "Enter index at which to insert : ";
    cin >> index;
    int size = vec.size();
    for(int i=size-1; i>=index; i--){
        vec[i] = vec[i-1];
    }
    vec[index] = val;
    vec.push_back(last);
    for(int val : vec){
         cout << val << " ";
    }
    return 0;
}

// 0 1 2 3 4 5 6 7 8
// 3
// 0 1 2 x  3 4 5 6 7
// 0 1 2 10 3 4 5 6 7 8


// i = 9-1 =8;
// i > 3-1; i >2 