//WAP to print multiplication of elements

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int n,val,mul=1;
    cout << "Enter of values to insert : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> val;
        vec.push_back(val);
    }
    for(int value : vec){
        cout << value << " " ;
    }
    cout << endl;

    for(int i=0;i<n;i++){
        mul *=vec[i];
    }

    cout << "sum of values : " << mul << endl;
    return 0; 
}