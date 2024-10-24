//WAP to delete an element

#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> vec;
    int n,pos;
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
    cout << "Enter position element to delete : ";
    cin >> pos;
    int size = vec.size();
    for(int i=pos-1; i<size; i++){
        vec[i] = vec[i+1];
    }
    vec.pop_back();
    for(int val : vec){
         cout << val << " ";
    }
    return 0;
}

//1 2 3 4 5 6 7 8
// pos = 5 ; index = 4
// 1 2 3 4 6 7 8 8