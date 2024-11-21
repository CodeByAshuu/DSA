//write a program to insert a element at end of the vector


#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int n,val,last;
    cout << "number of elements : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> val;
        vec.push_back(val);
    }
    for(int value : vec){
        cout << value << " " ;
    }
    cout <<endl;
    cout << "value to enter : ";
    cin >> last;
    vec.push_back(last);
    for(int val : vec){
         cout << val << " ";
    }
    return 0;
}

// 1 2 3 4 5 6
// 1 2 3 4 5 6 7