//WAP to find duplicate elements in a vector

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int n,val;
    cout<< "enter number of elements : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> val;
        vec.push_back(val);
    }
    for(int value : vec){
        cout << value << " " ;
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;i++){
            if(vec[i] == vec[j]){
                cout << "duplicate element : " << i << " " << j << endl;
            }
        }
    }
}