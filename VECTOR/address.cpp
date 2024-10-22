#include <iostream>
#include <vector>
using namespace std;

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
    
    for(int i=0; i < vec.size(); i++){
        cout << &vec[i] << " ";
    }
}
